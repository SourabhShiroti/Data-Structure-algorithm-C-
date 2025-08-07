#include<iostream>
using namespace std;
int main()
{
    int arr[]={4,6,8,12,74,0,64};
    int n;
    int x;
    cout<<"Enter the target value :";
    cin>>x;
    for(int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<x<<" is present";
            break;
        }
        else{
            cout<<"Not in preseent";
            break;
        }
    }
    return 0;
}