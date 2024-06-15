#include<iostream>
using namespace std;
int main()
{
    int radius;
    cout<<"Enter the radius of the circle:";
    cin>>radius;

    float area = 3.141*radius*radius;
    float circumfreance = 2 * 3.141 * radius;

    if(area>circumfreance)
    {
        cout<<"Area is the greater than the circumfrfence";
    }
    else
    {
        cout<<"circumfreance is the greater than the Area";
    }
}