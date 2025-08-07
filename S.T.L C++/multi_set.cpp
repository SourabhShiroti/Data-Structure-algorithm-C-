#include<bits/stdc++.h>
using namespace std;
 
int main(){
    multiset<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(2);
    cout<<"Print the multi-set elements in sorted order: ";
    for(int i:s){
        cout<<i<<" ";
    }
 
  return 0;
}