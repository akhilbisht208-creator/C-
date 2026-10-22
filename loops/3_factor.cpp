//Take a number as input and print all of its factors.

#include <iostream>
using namespace std;

int main(){
    int number;
    cout << "Enter the number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {

    for(int i=1;i<=number;i++){
        if(number%i==0){
            cout<<"Factor of "<<number<<" is "<<i<<endl;
}   
        }
    }
    

    return 0;
}