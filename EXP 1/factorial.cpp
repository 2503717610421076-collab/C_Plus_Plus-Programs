#include<iostream>
using namespace std;
int main()
{
    int n,m=1,i;
    cout<<"Enter a number to find factorial: ";
    cin>>n;
    if(n==0)
    {
            m=0;
    }
    else
    {
            for(i=1;i<=n;i++)
            {
                            m*=i;
            }  
    }
    cout<<"Factorial of "<<n<<" = "<<m<<endl;
    system("pause");
    return 0;
}
