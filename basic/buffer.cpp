//Buffer is a temporary memory area where input data is stored before it is processed.
#include<iostream>
using namespace std;

int main() {
    string name;
   
    int age;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your name: ";
  /*  {method 1-->getline(cin, name1); // This will read the leftover newline character from the previous input
    getline(cin, name);}
*/
    //method 2-->
    cin.ignore(); // This will ignore the leftover newline character from the previous input
    getline(cin, name);

    cout << "Hello, " << name << "! You are " << age << " years old." << "\n";
    return 0;
}
/*
1.cin >> age reads the integer, for example, 18.
2.When you press Enter, the newline character \n remains in the input buffer.
3.getline(cin, name) encounters that leftover \n and consumes it immediately, so it doesn't wait for you to enter your name.*/
