#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int prod=1;
    int arr[3][3]={ {1,5,7},{4,2,4},{6,4,1} };
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            prod*=arr[i][j];
        }
    }
    cout<<prod;
    
    return 0;
}