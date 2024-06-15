#include<iostream>
using namespace std;
float areaofcircle(float radius)
{
   float area = 3.1415*radius*radius;
   return area;
}

 
 int main()
{
    
    float r;
    cout<<"Enter radius : ";
    cin>>r;
    cout<<areaofcircle(r);
}
