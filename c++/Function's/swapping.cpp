#include<iostream>
using namespace std;

void swap(int a, int b)
{
    int  temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;

    return;
}


int main()
{
  int a,b,temp;
  cout<<"Enter any two number:";
  cin>>a>>b;
  swap(a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<" "<<b;
//     return 0;
 }