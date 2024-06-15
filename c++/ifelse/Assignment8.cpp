#include<iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter the 1st points:";
    cin>>x1>>y1;

    cout<<"Enter the 2nd points:";
    cin>>x2>>y2;

    cout<<"Enter the 3rd points:";
    cin>>x3>>y3;

    float m1=(y2-y1)/(x2-x1);

    float m2=(y3-y2)/(x3-x2);

    if(m1==m2)
    {
        cout<<"COLLINEAR";

    }
   else
   {
        cout<<"NON COLLINEAR";
   }


}