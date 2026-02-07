#include<iostream.h>
#include<string.h>

void ip(int &id, char name[20], double &cost, int &qty)
{

cout<<"Enter ID: ";
cin>>id;
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Price: ";
cin>>cost;
cout<<"Enter Stock: ";
cin>>qty;

if(cost<0)
{
cout<<"value of cost cannot be negative...!\n";
cost=0;
}

if(qty<0)
{
cout<<"value of stock cannot be negative...!\n";
qty=0;
}
}

void up(double &cp, double np)
{
if(np>=0)
{
cp=np;
cout<<"Price updated successully\n";
}
else
{
cout<<"Error: Price cannot be negative\n";
}

}

void pi(int &cs, double price, int rq)
{
if(rq<0)
{
cout<<"Enter the valid quantity..!\n";
}
else
{
if(rq<=cs)
{
cs-=rq;
cout<<"Bill amount = "<<rq*price<<"\nRemaining stock = "<<cs<<endl;
}
else
{
cout<<"Out of stock. Transaction Cancelled...!\n";
}
}
}

void ri(int &cs, int aq)
{
if(aq>0)
{
cs+=aq;
cout<<"New total stock = "<<cs<<endl;
}
else
{
cout<<"Enter a valid stock..!/n";
}

}

void dispps(int id, char name[20], double cost, int qty)
{
cout<<"Product ID: "<<id<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Current Price: "<<cost<<endl;
cout<<"Available Stock: "<<qty<<endl;
}





int main()
{
int c=0, pid=0, sq=0, pq, aq, x=1, ap;
double p=0, pnp;
char pn[20]={' '};

ip(pid, pn, p, sq);
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
cin>>pq;
pi(sq, p, pq);
break;
}

case 2:
{
cout<<endl;
cout<<"Enter the quantity to be added: ";
cin>>aq;
ri(sq, aq);
break;
}

case 3:
{
cout<<endl;
cout<<"Enter new price: ";
cin>>pnp;
up(p,pnp);
break;
}

case 4:
{
cout<<endl;
dispps(pid, pn, p, sq);
break;
}

case 5:
{
x=0;
}

}

}while(x);

system("pause");
return 0;

}

