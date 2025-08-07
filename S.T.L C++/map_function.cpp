#include<bits/stdc++.h>
using namespace std; 
int main(){
    map<string,int> m;
    m["ajay"]=40;
    m["vijay"]=50;
    m["raj"]=60;
    m["jay"]=40;
    m["sanjay"]=60;
    m.insert({"Ankit",15});
    

    //m.begin();
    //m.end();
    cout<<"Size of map is: "<<m.size()<<endl;
    cout<<"check if map is empty: "<<m.empty()<<endl;
    cout<<"find the value of key 'ajay': "<<m.at("ajay")<<endl;
    cout<<"Print the map element :"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
  return 0;
}