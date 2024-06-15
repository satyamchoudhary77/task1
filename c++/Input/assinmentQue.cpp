#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter any number:";
    cin>>x;
    int y,m;
    cout<<"Enter second nmber and value for taking modulus:";
    cin>>y>>m;
    int z=(x*y)%m;
    cout<<"output is:"<<z;
}