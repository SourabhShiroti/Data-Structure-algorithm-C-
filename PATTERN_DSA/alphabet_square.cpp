#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the size of the character square: ";
    cin>>ch;
    for(char i='A'; i<=ch; i++){
        for(char j='A'; j<=ch; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}