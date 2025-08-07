#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    map<int,string>m;
    m.insert(make_pair(1,"Sourabh"));
    m.insert(make_pair(2,"Shiroti"));
    m.insert(make_pair(3,"Ankit"));
    m.insert(make_pair(4,"Farhan"));
    m.insert(make_pair(5,"Sourabh"));
    m.insert(make_pair(6,"Dhruv"));
    m.insert(make_pair(7,"Sourabh"));
    m.insert(make_pair(8,"elvish bhai"));
    for(auto it=m.begin(); it!=m.end(); it++){
         cout<<it->first<<"  "<<it->second<<endl;
    }


  return 0;
}