#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter Month:";
    cin>>x;

    switch(x)
    {
       case 1: 
       cout<<"31 = january";
       break;

       case 2: 
       cout<<"28/27 = february";
       break;

       case 3: 
       cout<<"30 = March";
       break;

       case 4: 
       cout<<"31 = April";
       break;

       case 5: 
       cout<<"30 = may";
       break;

       case 6: 
       cout<<"31 = June";
       break;

       case 7: 
       cout<<"30 = july";
       break;

       case 8: 
       cout<<"31 = August";
       break;

       case 9: 
       cout<<"30 = September";
       break;

       case 10: 
       cout<<"31 = October";
       break;

       case 11: 
       cout<<"30 = November";
       break;

       case 12: 
       cout<<"31 = December";
       break;

       default :
       cout<<"chutiya samaz rakha hai kya???";
    }
}