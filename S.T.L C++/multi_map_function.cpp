#include<bits/stdc++.h>
using namespace std; 
int main(){
    multimap<string,int> m={{"ajay",40},{"vijay",50},{"raj",60},{"jay",40},{"sanjay",60}};
    // m["ajay"]=40;
    // m["vijay"]=50;
    // m["raj"]=60;
    // m["jay"]=40;
    // m["sanjay"]=60;
    // m.insert({"Ankit",15});
    

    //m.begin();
    //m.end();
    cout<<"Size of multimap is: "<<m.size()<<endl;
    cout<<"check if multimap is empty: "<<m.empty()<<endl;
    cout<<"Print the multimap element :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
  return 0;
}