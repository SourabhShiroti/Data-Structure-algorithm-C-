#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int tab1[3][2]={ {4,9},{5,2},{0,4} };
    int tab2[3][2]={ {0,5},{8,5},{6,3} };
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            cout<<tab1[i][j]+tab2[i][j]<<"  ";
        }
        cout<<endl;
    } 
  return 0;
}