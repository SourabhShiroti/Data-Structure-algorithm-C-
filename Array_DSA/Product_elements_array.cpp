#include<bits/stdc++.h>
using namespace std;
int main()
{
    int prod=1;
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        prod*=arr[i];
    }
    cout<<"Product of all the elements in the array :"<<prod;
  return 0;
}