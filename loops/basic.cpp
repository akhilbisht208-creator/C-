//Take a number N as input and print "Hello World" N times.
#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    for(int i=1;i<=number;i++){
        cout<<"Hello World"<<'\n';
    }
    return 0;
}