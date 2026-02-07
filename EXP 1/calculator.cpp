#include<iostream>
using namespace std;
int main()
{
    int a,b,o,r,x;
    float rd;
    char c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    
    do
    {
           cout<<"\nList of operator\n1. Addition\n2. Subraction\n3. Multiplication\n4. Division\n5. Modulus\nChoose the opertator: ";
           cin>>o;
           cout<<endl;
           
           switch(o)
           {
                    case 1:
                         {
                                       r=a+b;
                                       cout<<a<<" + "<<b<<" = "<<r;
                                       break;
                         }
                         
                         case 2:
                         {
                                       r=a-b;
                                       cout<<a<<" - "<<b<<" = "<<r;
                                       break;
                         }
                         
                         case 3:
                         {
                                       r=a*b;
                                       cout<<a<<" * "<<b<<" = "<<r;
                                       break;
                         }
                         
                         case 4:
                         {
                              if(b!=0)
                              {
                                      rd=(float)a/(float)b;
                                      cout<<a<<" / "<<b<<" = "<<rd;
                                      break;
                              }
                              else
                              {
                                  cout<<"Zero Division Error..!!!";
                              }   
                              break;
                         }
                         
                         case 5:
                         {
                              if(b!=0)
                              {
                                      r=a%b;
                                      cout<<a<<" % "<<b<<" = "<<r;
                                      break;
                              }
                              else
                              {
                                  cout<<"Zero Division Error..!!!";
                              }   
                              break;
                         }
                         
                         default:
                         {
                                 cout<<"Invalid operator";
                                 break;
                         }
                               
           }
           cout<<"\n\nWant to continue with another operation(y/n): ";
           cin>>c;
           
           if(c=='y' || c=='Y')
           {
                   x=1;
           }
           
           else
           {
               x=0;
           }     
           
    }while(x==1);
    
    system("pause");
    return 0;      
}

