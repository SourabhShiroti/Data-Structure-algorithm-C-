#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;
    cout<<"Enter the size of the vector :";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the vector :";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cout<<v[i]<<"  ";
    }
  return 0;
}