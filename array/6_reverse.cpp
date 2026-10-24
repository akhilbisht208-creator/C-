//Reverse an array

#include<iostream>
using namespace std;

int main() {
    int arr[10] = {23, 7, 45, 12, 89, 34, 5, 67, 19, 56};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size/2;i++){
        int c=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=c;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}