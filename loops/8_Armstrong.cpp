//Take a number as input and determine whether it is an Armstrong number or not.

#include<iostream>
#include <cmath>
using namespace std;

int main() {
    int n,digit1=0,count=0,digit2=0,astg=0;
    cout << "Enter the value of  n : ";
    cin >> n;
    int org=n;
    int original=n;
    while(n>0 ){
        digit1=n%10;
        count=count+1;
        n=n/10;
    }
    cout<<count <<" is count "<<endl;
    while(org>0){
        digit2=org%10;
        astg=astg+pow(digit2,count);
        org=org/10;
 

    }
        
    
    if(original==astg){
        cout<<original <<" is Armstrong number "<<endl;
    }
    else{
        cout<<original <<" is not Armstrong number "<<endl;
    }
    return 0;
}