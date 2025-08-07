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
    cout<<"Size of the multi-set: "<<s.size()<<endl;
    cout<<"check if the multip-set is empty or not: "<<s.empty()<<endl;
    cout<<"Find the element 3 in the multi-set: "<<s.count(3)<<endl;
    //cout<<"Clear the multi-set: "<<s.clear()<<endl;
    cout<<"Print the multi-set elements in sorted order: ";
    for(int i:s){
        cout<<i<<" ";
    }
 
  return 0;
}