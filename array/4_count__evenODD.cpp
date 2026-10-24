#include<iostream>
using namespace std;

int main() {
    int arr[10] = {23, 7, 45, 12, 89, 34, 5, 67, 19, 56};
    int Even_count=0;
    int odd_count=0;

    int size= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            Even_count++;
        }
        else{
            odd_count++;
        }
    }
    cout<<"Even count : "<<Even_count<<"\n";
    cout<<"Odd count : "<<odd_count<<"\n";
    return 0;
}