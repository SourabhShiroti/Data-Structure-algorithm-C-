#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    multimap<int,string>mm;
    mm.insert(make_pair(1,"Sourabh"));
    mm.insert(make_pair(1,"Shiroti"));
    mm.insert(make_pair(3,"Ankit"));
    mm.insert(make_pair(4,"Farhan"));
    mm.insert(make_pair(1,"Sourabh"));
    mm.insert(make_pair(6,"Dhruv"));
    mm.insert(make_pair(6,"Sourabh"));
    mm.insert(make_pair(8,"elvish bhai"));
    for(auto it=mm.begin(); it!=mm.end(); it++){
         cout<<it->first<<"  "<<it->second<<endl;
    }
    cout<<"Size of the multimap :"<<mm.size()<<endl;
    cout<<"Empty or not :"<<mm.empty()<<endl;

  return 0;
}