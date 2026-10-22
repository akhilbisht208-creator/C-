//Take a number as input and determine whether it is prime or not.

#include <iostream>
using namespace std;

int main() {
    int number, count = 0;
    cout << "Enter the number: ";
    cin >> number;

    if (number <= 1) {
        cout << number << " is not a prime number." << endl;
    }
    else {
        for (int i = 1; i <= number; i++) {
            if (number % i == 0) {
                count++;
            }
        }

        if (count == 2) {
            cout << number << " is a prime number." << endl;
        }
        else {
            cout << number << " is not a prime number." << endl;
        }
    }

    return 0;
}
