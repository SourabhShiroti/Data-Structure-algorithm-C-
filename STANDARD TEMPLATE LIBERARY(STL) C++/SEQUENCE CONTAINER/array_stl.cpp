#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,5>arr={45,6,8,0,74}; //Bothdecleration & initialiazation
    int size=arr.size();
    for(int i=0; i<size; i++){
        cout<<arr[i]<<endl;
        cout<<endl;  
    }
    cout<<"Elements of third index :"<<arr.at(2)<<endl;
    cout<<"First element of array :"<<arr.front()<<endl;
    cout<<"Last element of array :"<<arr.back()<<endl;
    cout<<"Size of array :"<<arr.size()<<endl;
    cout<<"Empty or not :"<<arr.empty();  
    return 0;
}