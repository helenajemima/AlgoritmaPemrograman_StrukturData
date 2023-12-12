#include <iostream>
using namespace std;

void check (int no, bool* even) {
    if (no % 2 == 0) {
        *even = true;
    } else {
        *even = false;
    }
}

int main() {
    int number;
    bool even;

    cout << "Enter an integer : ";
    cin >> number;

    check(number, &even);

    if (even) {
        cout << endl << number << " " << number + 1;
    } else {
        cout << endl << number;	
    }

    return 0;
}




