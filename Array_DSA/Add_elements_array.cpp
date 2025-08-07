#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int sum=0;
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of the elements :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    cout<<"Sum of elements in the array :"<<sum;
  return 0;
}