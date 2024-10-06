#include<iostream>
using namespace std;
float totalprice(char type,float price);

int main()
{
char type;
float price,result;
cout<<"Enter the vehicle type (M,E,S,V,T): ";
cin>>type;
cout<<"Enter the price of the vehicle: $ ";
cin>>price;
result= totalprice(type,price);
cout<<"The Final price of a vehicle of type "<<type<<" after adding the tax is: $ "<<result;
}

float totalprice(char type,float price)
{
float taxamount,finalprice;
	if(type=='M')
	{
	taxamount=price*0.06;
	finalprice=price+taxamount;
	}
	
	if(type=='E')
	{
	taxamount=price*0.08;
	finalprice=price+taxamount;
	}

	if(type=='S')
	{
	taxamount=price*0.1;
	finalprice=price+taxamount;
	}

	if(type=='V')
	{
	taxamount=price*0.12;
	finalprice=price+taxamount;
	}

	if(type=='T')
	{
	taxamount=price*0.15;
	finalprice=price+taxamount;
	}
}
	
	