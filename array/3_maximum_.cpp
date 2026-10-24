//Find Maximum in Array

#include<iostream>
using namespace std;

int main() {
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int maximum=arr[0];

    //If maximum = 0, no array element is greater than 0, 
    //so the algorithm would incorrectly return 0, even though 0 isn't in the array.

    for(int i=1;i<size;i++){
        if(maximum<arr[i]){
            maximum=arr[i];
        }
    }
    cout<<maximum;
    return 0;
}

/*Always initialize the maximum with arr[0], not 0, 
  so the algorithm works for both positive and negative array elements.
  and bcz we are assigning the value so it store wrong values */