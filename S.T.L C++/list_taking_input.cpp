#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Enter the size of list : ";
    cin>>n;
    cout<<"Enter the elements of list : ";
    list<int> li;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        li.push_back(x);
    }
    cout<<"Print the list :";
    for(auto i:li){
        cout<<i<<" ";
    }
  return 0;
}