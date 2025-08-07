#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int arr[3][3]={ {11,50,97},{14,22,40},{66,48,81} };
    int mn=INT_MAX;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            mn=min(mn,arr[i][j]);
        }
    }
    cout<<mn;
 
  return 0;
}