#include<iostream>
using namespace std;
int main()
{
    int arr[2][3];   //decleration
    arr[0][0]=5;    //initialise
    arr[0][1]=8;
    arr[0][2]=2;
    arr[1][0]=0;
    arr[1][1]=7;
    arr[1][2]=9;
    for(int i=0; i<2; i++){    //rows
        for(int j=0; j<3; j++){  //column
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}