//Guess the Number Game

#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int number;
    cout << "Enter the number between 1 and 10: ";
    cin >> number;
    srand(time(0));
    int num=rand()%10+1;

    while(num!=number){
        
    if(number<num){
        cout<<"Too small number " <<endl;
    }
    else{
        cout<<"Too large number " <<endl;
    }
    cout << "Guess again: ";
    cin >> number;
    }
    cout << "Congrats! You guessed the correct number!" << endl;
    cout << "Number is " << num << endl;
    return 0;
}