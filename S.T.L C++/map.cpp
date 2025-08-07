#include<bits/stdc++.h>
using namespace std; 
int main(){
    map<string,int> m;
    m["ajay"]=40;
    m["vijay"]=50;
    m["raj"]=60;
    m["jay"]=40;
    m["sanjay"]=60;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
  return 0;
}