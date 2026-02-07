#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int a;
    long long int p;
    char n[20],d[8],f[20],m[20],c[10],co[50],r[10],na[10];
    
    //input
    cout<<"Enter your details\n\nName: ";
    cin.getline(n,20);
    
    cout<<"Date of Birth(DD-MM-YYYY): ";
    cin>>d;
    cin.ignore();
    
    cout<<"Age: ";
    cin>>a;
    cin.ignore();
    
    cout<<"Father's name: ";
    cin.getline(f,20);
    
    cout<<"Mother's name: ";
    cin.getline(m,20);
    
    cout<<"Phone: ";
    cin>>p;
    cin.ignore();
    
    cout<<"City: ";
    cin.getline(c,10);
    
    cout<<"College: ";
    cin.getline(co,50);
    
    cout<<"Religion: ";
    cin.getline(r,10);
    
    cout<<"Nationality: ";
    cin.getline(na,10);
    
    //display
    cout<<"\n\n\n----------Bio_Data----------\n\n";
    
    cout<<"Name: "<<n<<endl;
    
    cout<<"Date of Birth: "<<d<<endl;
    
    cout<<"Age: "<<a<<endl;
    
    cout<<"Father's name: "<<f<<endl;
    
    cout<<"Mother's name: "<<m<<endl;
    
    cout<<"Phone: "<<p<<endl;
    
    cout<<"City: "<<c<<endl;
    
    cout<<"College: "<<co<<endl;
    
    cout<<"Religion: "<<r<<endl;
    
    cout<<"Nationality: "<<na<<endl;
    
    
    return 0;
}
