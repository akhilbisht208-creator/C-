//Take a number N as input and calculate the sum of its digits.

#include<iostream>
using namespace std;

int main() {
    int number,digit=0,sum=0;
    cout << "Enter the number: ";
    cin >> number;

    while(number>0){
        digit=number%10;
        sum=sum+digit;
        number=number/10; 
        
    }
    cout << "Sum of digits: " << sum << endl;
    return 0;
}