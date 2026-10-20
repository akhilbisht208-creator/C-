//Take two numbers as input and print larger number .

#include<iostream>
using namespace std;

int main() {
    int numb1,numb2;
    cout<<"Enter both number ";
    cin>>numb1>>numb2;
    if(numb1>numb2){
        cout<<"numb1 is larger ";
    }
    else{
        cout<<"numb2 is larger ";
    }
    return 0;
}