#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<endl;
    cout<<endl;
    cout<<"address of fun x:  "<<&x<<endl;
    cout<<"address of fun y:  "<<&y<<endl;
}
int main()
{    
    cout<<endl;
    cout<<endl;
    
    int x = 3;
    int y = 4;
    cout<<"address of main x:  "<<&x<<endl;
    cout<<"address of main y:  "<<&y<<endl;

    cout<<endl;
    cout<<endl;

    fun(x,y);
    cout<<endl;
    cout<<endl;
}