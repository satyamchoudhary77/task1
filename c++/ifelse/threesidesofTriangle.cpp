#include<iostream>
using namespace std;
int main()
{
    int a,b,c;

    cout<<"Enter the value  of a:";
    cin>>a;

    cout<<"Enter the value  of b:";
    cin>>b;

    cout<<"Enter the value  of c:";
    cin>>c;


    if(a+b>c)
    {
        if(b+c>a)
        {
            if(c+a>b)
            {
                cout<<"it is a Triangle";
            }
        }
    }
    else
    {
        cout<<"it is not a triangle";
    }
}