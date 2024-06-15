#include<iostream>
using namespace std;
int mian()
{
    float p, r, t, si;
    cout<<"enter the value of p";
    cin>>p;
    cout<<"enter the value of r";
    cin>>r;
    cout<<"enter the value of t";
    cin>>t;
    si = (p*r*t)/100;
    cout<<"si is:"<<si;
    
}


/*#include <iostream>
using namespace std;

int main() {
    // Declare variables
    float principal, rate, time, simpleInterest;

    // Input principal amount, rate of interest, and time
    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the rate of interest per year: ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the result
    cout << "Simple Interest is: " << simpleInterest << endl;

    return 0;
}*/
