#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n number :";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"Three digit number";
    }
    else if(n>999 && n<10000){
        cout<<"Four digit number";
    }
    else if(n>0 && n<10){
        cout<<"Single digit number";
    }
    else if(n>9 && n<100){
        cout<<"Double digit number";
    }
    else{
        cout<<"Large number";
    }
    return 0;
}