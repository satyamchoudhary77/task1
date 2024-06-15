#include<iostream>
using namespace std;
int main()
{
    int cp,sp;
    cout<<"Enter cost price and selling price of an item:";
    cin>>cp>>sp;
    if(cp<sp)
    {
        cout<<"profit="<<sp-cp;
    }
    if(sp<cp)
    {
       cout<<"loss="<<cp-sp;
    }
    if(cp==sp)
    {
        cout<<"No profit No loss="<<cp-sp;
    }
}
