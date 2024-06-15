#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter marks:";
    cin>>n;

     if(n>=91)  
    {
        if(n<=100)
        {
            cout<<"Excellent";
        }
    }
    if(n>=81)
    {
        if(n<=90)
        {
            cout<<"very good";
        }
    }
    if (n>=71)
    {
        if(n<=80)
        {
            cout<<"good";
        }
    }

    if (n>=61)
    {
        if(n<=70)
        {
            cout<<"can do better";
        }
    }

    if(n>=51)
    {
        if(n<=60)
        {
            cout<<"Average";
        }
    }

    if(n>=40)
    {
        if(n<=50)
        {
            cout<<"Below Average";
        }
    }
    if(n<40)
    {
        cout<<"Fail";
    }

}