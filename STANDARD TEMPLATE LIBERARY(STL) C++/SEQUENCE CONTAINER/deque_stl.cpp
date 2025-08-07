#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int>d;
    d.push_back(85);
    d.push_back(74);
    d.push_back(8);
    d.push_back(5);
    d.push_back(55);
    d.push_back(25);
    d.push_back(7);  
    d.push_front(43);  
    d.pop_front();
    d.pop_back();
    cout<<"First element of the deque :"<<d.front()<<endl;
    cout<<"Last element of the deque :"<<d.back()<<endl;
    cout<<"Element of 3rd index :"<<d.at(3)<<endl;
    cout<<"size of the element :"<<d.size()<<endl;
    cout<<"Empty or not :"<<d.empty()<<endl;
    return 0;
}