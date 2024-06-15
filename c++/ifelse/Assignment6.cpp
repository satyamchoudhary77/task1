#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the marks of a:";
    cin>>a;

    cout<<"Enter the marks of b:";
    cin>>b;

    cout<<"Enter the marks of c:";
    cin>>c;

    if(a<b && a<c)
    {
        cout<<a<<" has the least marks";
    }

    else if(b<a && b<c)
    {
        cout<<b<<"  has the least marks";
    }
    else
    {
        cout<<c<<" has the least marks";
    }
}