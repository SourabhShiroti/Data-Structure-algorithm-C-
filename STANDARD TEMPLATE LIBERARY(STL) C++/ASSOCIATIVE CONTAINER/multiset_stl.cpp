#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>ms;
    ms.insert(71);
    ms.insert(91);
    ms.insert(71);
    ms.insert(12);
    ms.insert(785);
    ms.insert(12);
    ms.insert(79);
    ms.insert(75);
    ms.insert(75);
    ms.insert(42);
    for(auto i=ms.begin(); i!=ms.end(); i++){
        cout<<*i<<endl;
    }
    cout<<"empty or not :"<<ms.empty()<<endl;
    cout<<"Size of the element :"<<ms.size()<<endl;
    return 0;
}