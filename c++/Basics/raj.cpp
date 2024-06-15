#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n:";
    cin>>n;
    int a;

    if((a%5==0 || a%4==0 ) && a%15!=0)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}
