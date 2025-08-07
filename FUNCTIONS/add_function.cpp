#include<bits/stdc++.h>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}

int main(){
    int a,b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    int c=sum(a,b);
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<c<<endl;
    
 
  return 0;
}