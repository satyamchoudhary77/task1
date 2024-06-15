#include<iostream>
using namespace std;
void print(int a, int b)
{  
    if(a<b)  
   {
    for(int i=a; i<=b; i++)
      {
       cout<<i<<endl;
      }
   }
 else
   {
    for(int i=b; i<=a; i++)
       {
          cout<<i<<endl;
       }
   }

}
int main()
{
    int a;
    cout<<"Enter Value of a:";
    cin>>a;

    int b;
    cout<<"Enter Value of b:";
    cin>>b; 
     print(a,b);        

}
