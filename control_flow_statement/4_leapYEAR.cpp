//Take year as an input and determine whether it is leap year

#include<iostream>
using namespace std;

int main() {
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year%4==0 && year%400 || year%100!=00){
        cout<<year<<" is leap year"<<endl;
    }
    else{
        cout<<year<<" is not a leap year ";
    }
    return 0;
}