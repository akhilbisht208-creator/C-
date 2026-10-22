//Take a number N as input and print its reverse.
#include<iostream>
using namespace std;

int main() {
    int number,reverse=0,digit=0;
    cout << "Enter the number: ";
    cin >> number;

    while(number>0){
        digit=number%10;
        reverse=reverse*10+digit;
        number=number/10;

    }
    cout<<"Reverse of "<<number <<" is "<< reverse <<endl;
    return 0;
}

