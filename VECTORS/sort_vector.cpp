#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the vector : ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elments of the vector :";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    cout<<"Ascending order shorted : ";
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
  return 0;
}