//Take a character as input and determine whether it is uppercase or lowercase.

#include<iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase character." << endl;
    }
    else if(ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase character." << endl;
    }
    else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
