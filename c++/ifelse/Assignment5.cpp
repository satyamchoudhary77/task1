#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3;
    cout<<"Enter side1, side2, side3:";
    cin>>side1>>side2>>side3;

    if(side1 == side2 && side2 == side3)
    {
        cout<<"it is equilateral triangle";
    }
    else if(side1==side2 || side2==side3)
    {
        cout<<"it is scalene triangle";
    }
    else
    {
        cout<<"it is isosceles triangle";
    }

}