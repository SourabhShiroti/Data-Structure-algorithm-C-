#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int nums[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the Search Element of the array : ";
    cin>>target;
    for(int i=0; i<n; i++){
        if(nums[i]==target){
            target=nums[i];
            cout<<i;
            return 0;
        }
   }
    cout<<-1;
    return 0;
}C:\MinGW\bin