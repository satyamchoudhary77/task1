#include<iostream>
using namespace std;
void sum(float a, float b)
{
    cout<<a+b;
}
void sum(int a, int b)
{
    cout<<a*b;
}
int main()
{    
    sum(4,6);
}
