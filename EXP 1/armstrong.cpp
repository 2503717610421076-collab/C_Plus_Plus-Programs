#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,c,i,s=0,r=0,d=0;
    cout<<"Enter a number: ";
    cin>>n;
    
    c=n;
    if(n==0)
    {
            d=1;
    }
    
    else
    {
        while(c>0)
        {
                  c/=10;
                  d++;
        }
    }
    
    r=n;
    while(r>0)
    {
              s=s+(int)pow((r%10),d);
              r/=10;
    }
    
    if(n==s)
    {
            cout<<n<<" is armstrong number\n";
    }
    else
    {
        cout<<n<<" is not armstrong \anumber\n";
    }
    
    return 0;
}

