#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter the nth number :";
    cin>>n;
    map<int,int>m;
    for(int i=0;i<=n;i++){
        cin>>m[i];
    }
    cout<<"Indexing & Elements :"<<endl;
    for(auto it:m){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    cout<<"empty or not :"<<m.empty()<<endl;
    cout<<"Size of the element :"<<m.size()<<endl;
    return 0;
}