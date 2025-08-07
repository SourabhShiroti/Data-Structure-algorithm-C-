#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(71);
    s.insert(91);
    s.insert(71);
    s.insert(12);
    s.insert(785);
    s.insert(12);
    s.insert(79);
    s.insert(75);
    s.insert(75);
    s.insert(42);
    s.begin();
    for(auto i=s.begin(); i!=s.end(); i++){
        cout<<*i<<endl;
    }
    cout<<"empty or not :"<<s.empty()<<endl;
    cout<<"Size of the element :"<<s.size()<<endl;
    return 0;
}