//Take two numbers from user and swap their values.
#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter both numbers : ";
    cin>>a>>b;
    a=a+b; 
    b=a-b;
    a=a-b;
    cout<<"Swapped values are : "<<a<< " " <<b<<endl;

    return 0;
}
/*
logic 2 
temp=a;
a=b;
b=temp;

*/