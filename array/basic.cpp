//array are in liner and contigous 
//An array stores elements of the same type.
//Its elements occupy contiguous memory locations.
//Array indexing starts from 0.
//For int arr[5], valid indexes are 0 to 4.*/
#include<iostream>
using namespace std;

int main() {
    int arr[5]; //this is array of size 5 and this can provide to store 5  int value ,
    //Although we can store less than 5, and these 5 are index we have from 0 - 4;
    // if we pass size and element ok ,if we donot pass size but assign value ok,but if donot pass the size this is not ok if you donot assign value

    //insert (assign value to array )
    //1.
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;

    //2.
    //arr[5]={10,20,30,40,50};

    //let suppose if have 5 space but we take 4 numbers/input then the 5th show 0 if it is int ,boolen false , write all possbile case 
    //if we do this by method 2
    //but we do this with method 1 then we get garbage values

    //print array 
    for(int i=0;i<=4;i++){
        cout<<arr[i]<<"\n";
    }
    
    return 0;
}

//we have only the address of the first element of array called base address
// we can find address of other elemnt of array by
//array[4]=BA+(size of (int ) * index(4))

//arr==array[0]