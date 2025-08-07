#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]<key)
        start=mid+1;
        else
        end=mid-1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout<<"Enter the size of the array :";
    cin>>n;
    cout<<"Enter the elements of the array in sorted order :";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the finding element :";
    cin>>key;

    cout<<binarysearch(arr,n,key);
    return 0;
}