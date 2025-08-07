#include<iostream>
using namespace std;
int main()
{
    int arr[5];    //declaration
    arr[0]=86;     //Initialization
    arr[1]=45;
    arr[2]=36;
    arr[3]=12;
    arr[4]=75;
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}