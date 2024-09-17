#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the first number";
    cin>>n;
    cout<<"enter the second number";
    cin>>m;
    int* p1=&n;
    int* p2=&m;
    int p3 ;
    p3 = *p1 * *p2;
    cout<<p3;

}