#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> pl;
    pl.push_back(14);
    pl.push_back(39);
    pl.push_back(24);
    pl.push_back(45);
    pl.push_back(30);
    pl.push_back(12);
    pl.pop_back();
    pl.pop_front();
    cout<<"Print the list :";
    for(auto i:pl){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Print the first element :"<<pl.front()<<endl;
    cout<<"Print the last element :"<<pl.back()<<endl;
    cout<<"Print the size of list :"<<pl.size()<<endl;
    cout<<"Print empty or not :"<<pl.empty()<<endl;
    //cout<<"Print the reverse list :"<<pl.reverse()<<endl;
    //cout<<"Print the sort list :"<<pl.sort()<<endl;
    
 
  return 0;
}