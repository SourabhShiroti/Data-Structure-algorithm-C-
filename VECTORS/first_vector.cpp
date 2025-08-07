#include<bits/stdc++.h>
using namespace std; 
int main()
{
    vector<string> car = {"Honda","Fortuner","BMW","Maruti","Swift","Thar"};
    cout<<"!    This is your car names   !"<<endl;
    cout<<car[0]<<endl;
    cout<<car[1]<<endl;
    cout<<car[2]<<endl;
    cout<<car[3]<<endl;
    cout<<car[4]<<endl;
    cout<<car[5]<<endl;
    cout<<"Before capacity of the vector :"<<car.capacity()<<endl;
    car.push_back("New car"); 
    car.insert(car.begin()+2,"XUV 700");
    cout<<car[6]<<endl;
    cout<<car[2]<<endl;
    cout<<"Size of the vector :"<<car.size()<<endl;
    cout<<"Capacity of the vector :"<<car.capacity();
  return 0;
}