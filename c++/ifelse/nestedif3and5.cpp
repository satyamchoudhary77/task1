#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any integer number:";
    cin>>n;
    if(n%3==0)
    {
        if(n%5==0)
        {
            cout<<"divisible by 5 and 3";
        }
        else
        {
            cout<<"not divisible by 5 and 3";
        }
    }

    else
    {
        cout<<"out of the program";
    }
}