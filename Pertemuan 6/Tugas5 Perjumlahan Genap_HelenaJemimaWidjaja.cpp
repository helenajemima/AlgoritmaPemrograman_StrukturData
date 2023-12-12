#include <iostream>
using namespace std;

int main() 
{
    int start, end;
    int n = 0;
    int sum = 0;

    cout << "Enter the beginning border: ";
    cin >> start;
    
    cout << "Enter the end border: ";
    cin >> end;

    //start = genap
    if (start % 2 != 0) {
        start++;
    }

    //start tidak boleh lebih besar dari end
    if (start > end) {
        cout << "Invalid range. Beginning border is larger than the end border." <<endl;
        return 1;
    }

    cout << "The equation of the sum is: ";

    for (int i = start; i <= end; i += 2) {
        sum += i;
        n++;
        if (n < 10) {
            cout << i << "+";
        } else {
            cout << i << "=" << sum <<endl;
            break; 
        }
    }

    //karena harus pertambahan 10 angka genap
    if (n < 10) {
        cout << "\nNot enough even numbers found in the selected range." <<endl;
        return 1;
    }
    return 0;
}

