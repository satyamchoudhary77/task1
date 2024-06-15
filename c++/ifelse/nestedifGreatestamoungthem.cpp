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

    if(x>y)
    {
        if(x>z)
        {
            cout<<x<<" is greatest number";
        }
        else 
        {
            cout<<"z is greatest";
        }

    }
    if(y>x)
    {
        if(y>z)
        {
            cout<<y<<" is greatest number";
        }
        else
        {
            cout<<"z is greatest ";
        }
    }
    if(z>x)
    {
        if(z>y)
        {
            cout<<z<<" is greatest number";
        }
        else
        {
            cout<<" y is greatest";
        }
    }

    else 
    {
        cout<<"out of the loop";
    }

}