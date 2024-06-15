#include<iostream>
using namespace std;
int main()
{
   int year;
   cout<<"Enter any year:";
   cin>>year;

   if(year%4==0)
   cout<<"leap year";
   else
   {
    cout<<"it is not a leap year";
   }
}