#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter the size of the Sub-Array : ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the Sub-Array : ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    cout<<"Print the Sub-Array :"<<endl;
    for(int st=0; st<n; st++){
        for(int end=st; end<n; end++){
            for(int i=st; i<=end; i++){
                cout<<nums[i];
            }
            cout<<"  ";
        }
        cout<<endl;
    }
 
  return 0;
}