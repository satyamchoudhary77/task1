#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any Number:";
    cin>>n;

    // for(int i=1; i<=n; i++){
    // cout<<"A B C D";
    // cout<<endl;
    // }

    for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++)
    {
         cout<<(char)(j+96)<<" ";
    }
      cout<<endl;
    }
}