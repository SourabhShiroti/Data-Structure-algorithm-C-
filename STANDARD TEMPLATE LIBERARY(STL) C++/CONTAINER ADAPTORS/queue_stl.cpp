#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(80);
    q.push(42);
    q.push(60);
    q.push(0);
    q.push(80);
    q.push(89);
    q.push(87);
    q.push(41);
    q.pop();
    cout<<"First element of the queue :"<<q.front()<<endl;
    cout<<"Last element of the queue :"<<q.back()<<endl;
    cout<<"size of the element :"<<q.size()<<endl;
    cout<<"Empty or not :"<<q.empty()<<endl;
    return 0;
}