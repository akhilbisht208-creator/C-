//take units of electricity consumed as input and calculate the total electricity bill according to the given condition

#include <iostream>
using namespace std;

int main() {
    int units, bill;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    if (units >= 0 && units < 100) {
        bill = units * 4;
    }
    else if (units >= 100 && units < 200) {
        bill = units * 5;
    }
    else if (units >= 200 && units < 300) {
        bill = units * 6;
    }
    else if (units >= 300 && units < 400) {
        bill = units * 7;
    }
    else if (units >= 400 && units < 500) {
        bill = units * 8;
    }
    else if (units >= 500) {
        bill = units * 13;
    }
    else {
        cout << "Invalid input. The number of units cannot be negative." << endl;
        return 0;
    }

    cout << "Your total electricity bill is Rs. " << bill << endl;

    return 0;
}
