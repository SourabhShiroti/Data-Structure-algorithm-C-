#include<iostream>
using namespace std;
int main()
{
    int n;
    int prod=1;
    cout<<"Enter the element in Array :";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    } 
    for(int i=0; i<n; i++){
        prod*=arr[i];
    }
    cout<<"Product of all the element :"<<prod<<" ";
    return 0;
}