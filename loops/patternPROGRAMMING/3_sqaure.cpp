#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    //outer loop for rows
    for(int i=1;i<=n;i++){
        //inner loop for columns
        for(int j=1;j<=n;j++){
            cout<<"*";
        }
    cout<<"\n";
    }
    return 0;
}