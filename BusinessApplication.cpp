#include<iostream>
using namespace std;
void title();
void seller(int a1,int a2,int a3, int b1,int b2,int b3, int c1,int c2,int c3, int d1,int d2,int d3, int e1,int e2,int e3,string a, string b, string c, string d, string e);

main()
{
system("cls");
string a,b,c,d,e;
int a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,e1,e2,e3;
title();
string name;
double cnic;
cout<<"SIGN IN !"<<endl;
cout<<"Enter your name: ";
cin>>name;
cout<<"Enter CNIC: ";
cin>>cnic;
cout<<""<<endl;

cout<<"ADMIN !"<<endl;
cout<<"Enter the name of available products: "<<endl;
cin>>a;
cin>>b;
cin>>c;
cin>>d;
cin>>e;
cout<<""<<endl;

cout<<"Enter the total quantity of "<<a<<" :";
cin>>a1;
cout<<"Enter the available stock of "<<a<<" :";
cin>>a2;
cout<<"Enter the price of one "<<a<<" :";
cin>>a3;
cout<<""<<endl;

cout<<"Enter the total quantity of "<<b<<" :";
cin>>b1;
cout<<"Enter the available stock of "<<b<<" :";
cin>>b2;
cout<<"Enter the price of one "<<b<<" :";
cin>>b3;
cout<<""<<endl;

cout<<"Enter the total quantity of "<<c<<" :";
cin>>c1;
cout<<"Enter the available stock of "<<c<<" :";
cin>>c2;
cout<<"Enter the price of one "<<c<<" :";
cin>>c3;
cout<<""<<endl;

cout<<"Enter the total quantity of "<<d<<" :";
cin>>d1;
cout<<"Enter the available stock of "<<d<<" :";
cin>>d2;
cout<<"Enter the price of one "<<d<<" :";
cin>>d3;
cout<<""<<endl;

cout<<"Enter the total quantity of "<<e<<" :";
cin>>e1;
cout<<"Enter the available stock of "<<e<<" :";
cin>>e2;
cout<<"Enter the price of one "<<e<<" :";
cin>>a3;
cout<<""<<endl;
cout<<""<<endl;

cout<<"USER !"<<endl;

seller(a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,e1,e2,e3,a,b,c,d,e);

}



void title()
{
cout<<"  _________________________________________________________________________________________________________________________________________________"<<endl;
cout<<" |                                                                                                                                                 |"<<endl;
cout<<" | #####   ##   ##   #####   #####    ###    #####   #####    ####   ##    #      #####   #####   #     #   #####   #      #####   ####    #   #   |"<<endl;
cout<<" |   #     # # # #     #       #     #   #     #       #     #    #  # #   #        #     #       #     #   #       #      #       #   #    # #    |"<<endl;
cout<<" |   #     #  #  #     #       #     #####     #       #     #    #  #  #  #        #     ###     #  #  #   ####    #      ####    ####      #     |"<<endl;
cout<<" |   #     #     #     #       #     #   #     #       #     #    #  #   # #     #  #     #       # # # #   #       #      #       #  #      #     |"<<endl;
cout<<" | #####   #     #   #####     #     #   #     #     #####    ####   #    ##      ##      #####   ##   ##   #####   #####  #####   #   #     #     |"<<endl;
cout<<" |_________________________________________________________________________________________________________________________________________________|"<<endl;
cout<<""<<endl;
}

void seller(int a1,int a2,int a3, int b1,int b2,int b3, int c1,int c2,int c3, int d1,int d2,int d3, int e1,int e2,int e3,string a, string b, string c, string d, string e)
{
string product;
cout<<"Enter the product you want to buy ("<<a<<", "<<b<<", "<<c<<", "<<d<<", "<<e<<"): ";
cin>>product;
int quantity,total;
if(product==a)
	{
	cout<<"Available quantity of "<<a<<" is "<<a2<<endl;
	cout<<"price per "<<a<<" = "<<a3<<endl;
	cout<<"Enter the quantity of "<<a<<" you want to buy: ";
	cin>>quantity;
	total=a3*quantity;
	cout<<"So, your total purchase amount is: "<<total<<endl;
	cout<<"THANK YOU !";
	}

if(product=="b")
	{
	cout<<"Available quantity of "<<b<<" is "<<b2<<endl;
	cout<<"price per "<<b<<" = "<<b3<<endl;
	cout<<"Enter the quantity of "<<b<<" you want to buy: ";
	cin>>quantity;
	total=b3*quantity;
	cout<<"So, your total purchase amount is: "<<total<<endl;
	cout<<"THANK YOU !";
	}

if(product=="c")
	{
	cout<<"Available quantity of "<<c<<" is "<<c2<<endl;
	cout<<"price per "<<c<<" = "<<c3<<endl;
	cout<<"Enter the quantity of "<<c<<" you want to buy: ";
	cin>>quantity;
	total=c3*quantity;
	cout<<"So, your total purchase amount is: "<<total<<endl;
	cout<<"THANK YOU !";
	}

if(product=="d")
	{
	cout<<"Available quantity of "<<d<<" is "<<d2<<endl;
	cout<<"price per "<<d<<" = "<<d3<<endl;
	cout<<"Enter the quantity of "<<d<<" you want to buy: ";
	cin>>quantity;
	total=d3*quantity;
	cout<<"So, your total purchase amount is: "<<total<<endl;
	cout<<"THANK YOU !";
	}

if(product=="e")
	{
	cout<<"Available quantity of "<<e<<" is "<<e2<<endl;
	cout<<"price per "<<e<<" = "<<e3<<endl;
	cout<<"Enter the quantity of "<<e<<" you want to buy: ";
	cin>>quantity;
	total=e3*quantity;
	cout<<"So, your total purchase amount is: "<<total<<endl;
	cout<<"THANK YOU !";
	}

}





