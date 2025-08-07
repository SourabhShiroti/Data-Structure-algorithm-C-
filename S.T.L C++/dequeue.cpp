#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size of deque: ";  
    cin>>n;
    cout<<"Enter the elements of deque: ";
    deque<int> deq(n);
     for(int i=0; i<n; i++){
        cin>>deq[i];
    }
    cout<<"Print the elements of deque: ";
    for(int i=0; i<n; i++){
        cout<<deq[i]<<" ";
    }
 
  return 0;
}