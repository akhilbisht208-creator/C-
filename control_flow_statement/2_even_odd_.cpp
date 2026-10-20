//Take a number as input and determine whether it is even or odd.
#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number%2==0){
        cout<<"The given number is even ";
    }
    else{
        cout<<"The given number is odd ";
    }

    return 0;
}