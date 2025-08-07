#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;
    cout<<"maximum number :"<<max(a,b)<<endl;
    cout<<"Minimum number :"<<min(a,b);
    return 0;

}