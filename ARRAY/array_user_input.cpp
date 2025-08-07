#include<iostream>
using namespace std;
int main()
{
    int n;    //decleation
    cout<<"Entner n number :";   //print the output
    cin>>n;      //initialization
    int arr[n];   //decleration
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}