//Take a number as input and calculate its factorial.

#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;
    cout << "Enter the number: ";
    cin >> number;

    if (number < 0) {
        cout << "Factorial of a negative number is not defined." << endl;
    }
    else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        cout << "The factorial of " << number
             << " is " << factorial << endl;
    }

    return 0;
}
