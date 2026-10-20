//take temperature in celsius and convert it into fahrenheit
#include<iostream>
using namespace std;

int main() {
    float celsius,fahrenheit;
    cout<<"Enter temperature in celsius : ";
    cin>>celsius;
    fahrenheit=(celsius*9/5)+32;
    cout<<"Temperature in fahrenheit is : "<<fahrenheit<<endl;
    return 0;
}