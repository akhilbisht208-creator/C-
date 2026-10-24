#include<iostream>
using namespace std;

void primeN(int n);
void primeN(int n){
    int count=0;

    if(n<=1){
        cout<<n<<" Not a Prime Number";
        return ;
    }

    for(int i=1;i<=n;i++){
        if(n%i==0){
        count++;
        }
    }

    if(count==2){
         cout<<n<<" is a Prime Number";
    }
    else{
         cout<<n<<"  Not a Prime Number";
    }
}

int main() {
    int n=8;

    primeN(n);

    return 0;
}