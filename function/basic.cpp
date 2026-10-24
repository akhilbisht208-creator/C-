#include <iostream>
using namespace std;

// Function declaration (prototype)
void swap(int &a, int &b);

// Function definition
void swap(int &a, int &b) {
    // a and b are reference parameters (aliases)
    // for the original variables passed as arguments.

    // Swapping logic
    int c = a;
    a = b;
    b = c;
}

int main() {
    int a = 3, b = 4;

    // Function call: a and b are arguments
    swap(a, b);

    cout << "After swapping:\n a = " << a
         << ", b = " << b << endl;

    return 0;
}