#include<iostream>
using namespace std;
int changeval(int x,int y=6, int z=4){
    return (x+y+z);
}

int main()
{
    cout<<changeval(4)<<endl;
    cout<<changeval(4,7)<<endl;
    cout<<changeval(4,7,2)<<endl;
}