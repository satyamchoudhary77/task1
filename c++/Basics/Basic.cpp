#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int firstDigit, lastDigit;
    int* ptr1 = &firstDigit;
    int* ptr2 = &lastDigit;
    *ptr2 = n%10;
    while(n>9)
    {
        n/=10;
    }
    *ptr1 = n;
    cout<<firstDigit<<" "<<lastDigit;
}