#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y:";
    cin>>y;
    cout<<"Enter the value of z:";
    cin>>z;

    if(x>y && x>z)
    {
        cout<<x<<" is Greater";
    }
    if(y>x && y>z)
    {
        cout<<y<<" is Greater";
    }
    if(z>x && z>y)
    {
        cout<<z<<" is Greater";
    }

}