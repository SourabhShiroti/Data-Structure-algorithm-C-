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
    int target;
    cout<<"Enter the search element : ";
    cin>>target;
    for(int i=0; i<n; i++){
        if(target==v[i]){
            cout<<"Yes target is present : "<<target;
            break;
        }
    }
  return 0;
}