#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(6);
    v.push_back(8);
    v.push_back(9);
    cout<<"Lower bound -> "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<"Upper bound -> "<<upper_bound(v.begin(),v.end(),8)-v.begin()<<endl;
    return 0;

}