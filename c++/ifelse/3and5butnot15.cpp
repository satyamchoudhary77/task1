#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"enter any integer number:";
    cin>>x;

    // if ( (x%5==0 || x%3==0) && x%15!=0)
    // cout<<"Number is divisible by 5 and 3 but not 15";
    // else
    // {
    // cout<<"Condition not satisfied";
    // }

    if( x%5==0 || x%3==0) 
     {
         if (x%15!=0)
         {
            cout<<"Number is divisible by 5 or 3 but not 15";
         }
         else
         {
            cout<<"condition not satisfied";
         }     

     }

   else
   {
    cout<<"condition not satisfied2";
   }


}