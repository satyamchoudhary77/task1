#include<iostream>
using namespace std;
int main()
{


    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    char ch;
    cout<<"Enter a character:";
    cin>>ch;

    if(ch>=65 && ch<=90)
    {
        cout<<"CAPITAL ALPHABET";
    }
    else if(ch>=97 && ch<=122)
    {
        cout<<"small alphabet";
    }
    else
    {
        cout<<"special character";
    }
    cout<<endl; 
    cout<<endl; 
    cout<<endl;
    cout<<endl;
}