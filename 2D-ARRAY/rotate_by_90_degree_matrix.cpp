#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a[3][3]={ {1,5,6},{5,9,6},{0,7,2} };
    int b[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j]<<" ";
            b[j][3-i-1]=a[i][j];
        }
        cout<<endl;
    }

    cout<<"rorated by 90 degress angle"<<endl;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
 
  return 0;
}