//take number as an input determine whether it is positive, negative or zero

#include<iostream>
using namespace std;

int main() {
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number==0){
        cout<<"The Given number is zer0 ";
    }
    else if(number<0){
        cout<<"The Given number is Negative ";
    }
    else{
        cout<<"The Given number is P0sitive ";
    }
    
    
    return 0;
}