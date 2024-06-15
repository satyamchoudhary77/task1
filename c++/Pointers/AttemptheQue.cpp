#include<iostream>
using namespace std;
int main()
{
    int a=15, b=20;
    int* ptr = &a;
    int* ptr2 = &b;
    *ptr = *ptr2;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"ptr="<<a<<endl;
    cout<<"ptr2="<<a<<endl;
}
