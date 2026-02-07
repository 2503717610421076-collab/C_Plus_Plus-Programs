#include<iostream>
using namespace std;
int main()
{
    int i,n,x=0,y=1,s;
    cout<<"Enter the number of terms for fibbonacci series: ";
    cin>>n;
    cout<<"\nFibonacci series of "<<n<<" terms\n";
    for(i=0;i<n;i++)
    {
                    cout<<x<<" ";
                    s=x+y;
                    x=y;
                    y=s;
    }
    return 0;
}

