#include<iostream>
using namespace std;
int squareofCount(int n)
{
 int count = 0;
    while(n!=0)
    {
        n /= 10;
        count++;
    }
    return count*count;  
}     
int main()
{
    int n;
    cout<<"Enter a Number:";
    cin>>n;
   cout<<squareofCount(n);
    
}