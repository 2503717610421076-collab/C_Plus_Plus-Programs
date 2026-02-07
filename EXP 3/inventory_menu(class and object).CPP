#include<iostream.h>
#include<string.h>

class product
{
      private:

      int pid, sq;
      char pn[50];
      double p;

      public:

      int set(int pidm, char pnm[50], double pm, int sqm)
      {
          pid=pidm;
          sq=sqm;
          strcpy(pn,pnm);
          p=pm;
          return 0;
      }

      int up(double np)
      {     
            if(np>0)
            {
                    p=np;
                    cout<<"Price updated successfully\n";
            }

            else
            {
                    cout<<"Error: Price cannot be negative\n";
            }
            return 0;
      }

      int pi(int rq)
      {
          if(sq>=rq)
          {
                sq-=rq;
                cout<<"Total Bill amount : "<<rq*p<<"\nRemaining stock : "<<sq<<endl;
          }

          else
          {
                cout<<"Transaction Failed: Out of stock\n";
          }
          return 0; 
      }

      void ri(int aq)
      {
           if(aq>0)
           {
                sq+=aq;
                cout<<"New stock available : "<<sq<<endl;
           }
           else
           {
                cout<<"Enter a valid stock\n";
           }

      }

      void disp()
      {
           cout<<"Product ID: "<<pid<<endl;
           cout<<"Name: "<<pn<<endl;
           cout<<"Current Price: "<<p<<endl;
           cout<<"Available Stock: "<<sq<<endl;

      }

};

int main()
{
     int c, x=1, id, qty, mnp, mrq;
     char n[50];
     double r, maq;

     cout<<"Enter ID: ";
     cin>>id;
     cout<<"Enter Name: ";
     cin>>n;
     cout<<"Enter Price: ";
     cin>>r;
     cout<<"Enter Stock: ";
     cin>>qty;

     if(r<0)
     {
            cout<<"Enter a valid price\n\n";
     }
     product p1;

     p1.set(id, n, r, qty);
     cout<<"---INVENORY MENU---\n"<<"1.Purchase\n"<<"2.Restock\n"<<"3.Update Price\n"<<"4.View Status\n"<<"5. Exit\n";

     do
     {
          cout<<"\nChoice: ";
          cin>>c;

          switch(c)
          {    
               case 1:
               {
                          cout<<endl;
                          cout<<"Enter quantity to buy: ";
                          cin>>mrq; 
                          p1.pi(mrq);
                          break;
               }

               case 2:
               {
                          cout<<endl;
                          cout<<"Enter the quantity to be added: ";
                          cin>>maq;
                          p1.ri(maq);
                          break;
               }

               case 3:
               {
                
                          cout<<endl;
                          cout<<"Enter new price: ";
                          cin>>mnp;
                          p1.up(mnp);
                          break;
               }

               case 4:
               {
                          cout<<endl;
                          p1.disp();
                          break;
               }

               case 5:
               {
                          x=0;
                          break;
               }

        }

    }while(x);

system("pause");
return 0;
}




