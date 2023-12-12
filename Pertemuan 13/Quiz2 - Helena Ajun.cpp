#include <iostream>
using namespace std;

#define MAX_SIZE 100 

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    bool push(int val) {
        if (top >= MAX_SIZE - 1) {
            cout << "Stack overflow!" << endl;
            return false;
        }
        arr[++top] = val;
        return true;
    }

    int topValue() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }

    int pop() {
        if (top < 0) {
            cout << "Stack is already empty" << endl;
            return 0;
        }
        return arr[top--];
    }

    bool isEmpty() {
        return top < 0;
    }
};

int main() {
    Stack myStack;

    myStack.push(5);
    myStack.push(10);
    myStack.push(15);

    cout << "Top Element: " << myStack.topValue() << endl;
    cout << "Element " << myStack.pop() << " removed from stack" << endl;
    cout << "Top Element now: " << myStack.topValue() << endl;

    return 0;
}
