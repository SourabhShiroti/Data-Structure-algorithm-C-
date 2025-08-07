#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout<<"Size of queue: "<<q.size()<<endl;
    cout<<"Front element of queue: "<<q.front()<<endl;
    cout<<"Back element of queue: "<<q.back()<<endl;
    cout<<"Is queue empty: "<<q.empty()<<endl;
    cout<<"Print the queue elements: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
  return 0;
}