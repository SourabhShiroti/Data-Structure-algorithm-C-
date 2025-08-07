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
    int min=nums[0];
    int max=nums[0];
    for(int i=0; i<n; i++){
        if(nums[i]<min){
            min=nums[i];
        }
        else if(nums[i]>max){
            max=nums[i];
        }
    }
    cout<<"Smallest element of the array : "<<min<<endl;
    cout<<"Largest element of the array : "<<max;
    return 0;
}