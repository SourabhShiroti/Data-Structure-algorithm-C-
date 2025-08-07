#include<bits/stdc++.h>
using namespace std;
int revrse_nums(int x){
    int rev=0;
    while(x!=0){
        int rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    return rev;
}
 
int main(){
    int x;
    cout<<"Enter the number :";
    cin>>x;
    int rev=revrse_nums(x);
    cout<<"The reverse of the number is : "<<rev<<endl;
  return 0;
}