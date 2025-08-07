#include<iostream>
using namespace std;
double area(int r){
    return 3.14*r*r;
}
double cirm(int r){
    return 2*3.14*r;
}
int main()
{
    int r=5;
    cout<<"Radius of the circle is :"<<r<<endl;
    cout<<"Area of the circle : "<<area(r)<<endl;
    cout<<"Circumference of the circle : "<<cirm(r);
}