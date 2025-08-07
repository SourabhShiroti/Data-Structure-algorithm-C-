#include<bits/stdc++.h>
using namespace std; 
int main(){
    multimap<string,int> m={{"ajay",40},{"vijay",50},{"raj",60},{"kegal",40},{"sanjay",60}};
    // m["ajay"]=40;
    // m["vijay"]=50;
    // m["raj"]=60;
    // m["jay"]=40;
    // m["sanjay"]=60;
    cout<<"Printing the multimap element :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
  return 0;
}