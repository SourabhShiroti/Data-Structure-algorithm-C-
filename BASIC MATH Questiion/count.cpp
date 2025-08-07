#include<bits/stdc++.h>
using namespace std; 
int count_num(int n){
    if(n==0){
        return 1;
    }
    int cnt=0;
    while(n>0){
        n=n/10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int digit=count_num(n);
    cout<<"The number of digits :"<<digit;
  return 0;
}