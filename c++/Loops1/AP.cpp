#include<iostream>
using namespace std;
int main()
{
    int i,n;
     cout<<"Enter a number:";
     cin>>n;
    // for(i=1; i<=2*n-1; i=i+2)
    // {
    //     cout<<i<<endl;
    // }

    // 4 7 10 13 17.....
    int a = 4;
    for( i=1; i<=n; i++)
    {
        cout<<a<<endl;
        a = a+3;
    }
} 