#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(25);
    v.insert(v.begin()+2,12);
    v.pop_back();
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    v.clear();
    cout<<"Size of the vector : "<<v.size()<<endl;
    cout<<"Capacity of the vector : "<<v.capacity()<<endl;
  return 0;
}