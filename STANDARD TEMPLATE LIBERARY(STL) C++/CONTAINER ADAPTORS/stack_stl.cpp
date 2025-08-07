#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>st;
    st.push(80);
    st.push(42);
    st.push(60);
    st.push(0);
    st.push(80);
    st.push(89);
    st.push(87);
    st.push(41);
    cout<<"Top element of the stack :"<<st.top()<<endl;
    cout<<"size of the element :"<<st.size()<<endl;
    cout<<"Empty or not :"<<st.empty()<<endl;
    return 0;
}