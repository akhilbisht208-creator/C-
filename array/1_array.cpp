//Take the size N and N array elements as input. Print the array.

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the value of arr["<<i<<"]\n";
        cin>>arr[i];
    }

     for(int i=0;i<n;i++){
        cout<<"arr ["<<i<<"] = "<<arr[i]<<"\n";
    }
    return 0;
}