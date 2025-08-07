#include<bits/stdc++.h>
using namespace std;
 
int main(){
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(9);
    dq.push_back(10);
    dq.push_back(30);
    dq.push_back(4);
    dq.push_front(12);
    dq.push_front(5);
    dq.push_front(6);
    dq.pop_front();
    dq.pop_back();
    cout<<"The elements of deque are: ";
    for(int i=0; i<dq.size(); i++){
        cout<<dq[i]<<" ";
    }
    cout<<endl;
    cout<<"The front element of deque is: "<<dq.front()<<endl;
    cout<<"The back element of deque is: "<<dq.back()<<endl;
    cout<<"The size of deque is: "<<dq.size()<<endl;
    cout<<"Check empty or not: "<<dq.empty()<<endl;
  return 0;
}