#include<bits/stdc++.h>
using namespace std;
 
int main(){
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    l1.push_back(60);
    l1.push_back(70);
    l1.push_back(80);

    cout<<"The elements of the list are: ";
    for(auto i:l1){
        cout<<i<<"  ";
    }
 
  return 0;
}