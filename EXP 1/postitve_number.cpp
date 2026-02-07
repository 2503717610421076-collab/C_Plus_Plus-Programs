#include<iostream>
using namespace std;
int main()
{
    int n;
    
    do
    {
        cout<<"Enter a positive number: ";
        cin>>n;
        
        if(n<0)
        {
               cout<<"\nOops..! you entered the negative number\nRenter the positive number\n\n";
        }
    }while(n<=0);
    return 0;
}

