#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any numbers :";
    cin>>n;
    if(n>0 && n<=9){
        cout<<"Single digit";
    }
    else if(n>10 && n<=99){
        cout<<"Double Digit";
    }
    else if(n>100 && n<=999){
        cout<<"Three Digit";
    }
    else{
        cout<<"Invalid number";
        // 
       
        
    }
    return 0;
}