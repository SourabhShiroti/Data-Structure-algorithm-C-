#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[3][3]={ {11,50,97},{14,22,40},{66,48,81} };
    int mx=INT_MIN;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<mx;
 
  return 0;
}