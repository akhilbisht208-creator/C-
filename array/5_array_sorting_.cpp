//Check if array is sorted

#include<iostream>
using namespace std;

int main() {
    int arr[10] = {23, 7, 45, 12, 89, 34, 5, 67, 19, 56};
    
    int size= sizeof(arr)/sizeof(arr[0]);
    int issorted=1;
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            issorted=0;
            break;
        }
    }

    if(issorted==1){
        cout<<"sorted";
    }
    if(issorted==0){
        cout<<"NOT sorted";
    }
    return 0;
}

/*The loop stops when i = size - 2, so the last comparison is between the second-last and last elements.

Remember the rule:
- When accessing only arr[i], use i < size.
- When accessing both arr[i] and arr[i+1], use i < size - 1.
The important point is that size - 1 is the last valid index, but the loop condition uses < size - 1 
because we also need to access the next element.*/