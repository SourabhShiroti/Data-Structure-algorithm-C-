#include <iostream>
using namespace std;
int main() 
{
    int n;
    int prod = 1;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements:"<< endl;
    for(int i=1; i<n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<n; i++){
        prod*=arr[i];
    }
    cout<<"The product of the array elements is: "<<prod<<endl;
    return 0;
}
