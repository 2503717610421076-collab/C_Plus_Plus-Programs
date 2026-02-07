#include<iostream>
using namespace std;
int main()
{
    int n,copy,rev=0;
    cout<<"Enter the number: ";
    cin>>n;
    copy=n;
    while(copy>0)
    {
                 rev*=10;
                 rev=rev+(copy%10);
                 copy/=10;
    }
    if(rev==n)
    {
              cout<<n<<" is palindrome..."<<endl;
    }
    else
    {
        cout<<n<<" is not palindrome..."<<endl;
    }
    return 0;    
}

