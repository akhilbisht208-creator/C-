//Take character as input and check whether it is a vowel or consonant(using switch)
#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    switch(ch){

    case 'a': {
        cout<<ch<<" is Vowel "<<endl;
        break;
    }
    case 'e': {
        cout<<ch<<" is Vowel "<<endl;
        break;
    }
    case 'i': {
        cout<<ch<<" is Vowel "<<endl;
        break;
    }
    case 'o': {
        cout<<ch<<" is Vowel "<<endl;
        break;
    }
    case 'u': {
        cout<<ch<<" is Vowel "<<endl;
        break;
    }
    default:{
        cout<<ch<<" is Consonant "<<endl;
        break;
    }
    }
    
    return 0;
}