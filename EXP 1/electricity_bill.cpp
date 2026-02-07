#include<iostream>
using namespace std;
int main()
{
    int e,t;
    cout<<"Enter number of unit consumed: ";
    cin>>e;
    
    
    if(e<=100)
    {
              t=e*5;
    }
    
    else if(e>100 && e<=300)
    {
         t=e*7;
    }
    
    else
    {
        t=e*10;
    }
    
    cout<<"\n-----Electricity Bill-----\n\nCost = Rs."<<t<<endl;
    system("pause");
    
    return 0; 
    
}
