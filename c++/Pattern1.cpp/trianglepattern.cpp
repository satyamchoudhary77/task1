#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}