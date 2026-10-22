//Take a number N as input and determine whether it is a palindrome or no.

#include<iostream>
using namespace std;

int main() {
    int number,reverse=0,digit=0;
    cout << "Enter the number: ";
    cin >> number;
    int org=number;
    while(number>0){
        digit=number%10;
        reverse=reverse*10+digit;
        number=number/10;

       
        }
    if(reverse==org){
        cout<<org<<"is palindrome number ";
}
    else{
        cout<<org<<" is not palindrome number ";
    }
    return 0;
}

