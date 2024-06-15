#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter first Number:";
    cin>>n;

    int m;
    cout<<"Enter second Number:";
    cin>>m;

int* ptr1 = &n;
int* ptr2 = &m;

cout<<(*ptr1)*(*ptr2);
}