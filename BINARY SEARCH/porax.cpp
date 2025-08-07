#include<bits/stdc++.h>
using namespace std;
int random(int nums[],int n,int target){
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
        mid=start+end/2;
        if(nums[mid]==target)
            return mid;
        else if(nums[mid]<target)
            start=mid+1;
        else
            end=mid-1;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the size of the array :- ";
    cin>>n;
    int nums[1000];
    cout<<"Enter the elements of the array :- ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target element :- ";
    cin>>target;
    cout<<random(nums,n,target);

    return 0;
}