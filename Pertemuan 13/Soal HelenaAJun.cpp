#include <iostream>
#include <stack>
using namespace std;

class fibonacci {
private:
    int n;
    int result;
    bool store;

public:
    fibonacci(int num) : n(num), result(0), store(false) {}

    int calculate(stack<fibonacci>& call) {
        if (n == 0) {
            return 0;
        } else if (n == 1) {
            return 1;
        }

        while (call.size() > 0 && call.top().n != n) {
            call.pop();
        }

        if (call.size() > 0 && call.top().store) {
            return call.top().result;
        }

        result = fibonacci(n - 1).calculate(call) + fibonacci(n - 2).calculate(call);

        call.push(*this);
        call.top().result = result;
        call.top().store = true;

        return result;
    }

    static void print(int n, stack< fibonacci >& call) {
        for (int i = 0; i < n; ++i) {
            int result = fibonacci(i).calculate(call);
            cout << result << " ";
        }
        cout << endl;
    }
};

int main() {
    stack<fibonacci> call;
    int n;

    cout << "Enter the number of Fibonacci terms : ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 1;
    }

    int result = fibonacci(n).calculate(call);

    cout << "\nFibonacci sequence up to " << n << " terms: \n";
    fibonacci::print(n, call);
    return 0;
}

