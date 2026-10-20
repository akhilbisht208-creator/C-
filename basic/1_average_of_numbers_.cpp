//Take three numbers as input and print their average
#include <iostream>
using namespace std;
int main(){
    int n1,n2,n3,sum;
    float avg;
    cout<<"Enter three numbers : ";
    cin>>n1>>n2>>n3;
    sum=n1+n2+n3;
    avg=sum/3.0;
    cout<<"Average of the given numbers :  "<<avg<<endl;


    return 0;
}