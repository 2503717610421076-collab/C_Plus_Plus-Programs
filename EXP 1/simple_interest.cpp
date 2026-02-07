#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Simple Interst Calculator\n\n";
    
    cout<<"Enter the principle amount: ";
    cin>>p;
    
    cout<<"Enter rate of interest: ";
    cin>>r;
    
    cout<<"Enter the time period: ";
    cin>>t;
    
    si=(p*r*t)/100;
    
    cout<<"Simple interest = "<<fixed<<setprecision(2)<<si<<endl;
    system("pause");
    return 0;
}
