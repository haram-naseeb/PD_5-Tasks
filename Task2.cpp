#include<iostream>
using namespace std;
float result(float length,float width,float height,string unit);

main()
{
float length,width,height,volume;
string unit;
cout<<"Enter the length of te pyramid (in meters): ";
cin>>length;
cout<<"Enter the width of the pyramid (in meters): ";
cin>>width;
cout<<"Enter the height of the pyramid (in meters): ";
cin>>height;
cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>>unit;
volume= result( length, width, height,unit);
cout<<"The volume of the pyramid is "<<volume<<" cubic "<<unit;
}

float result(float length,float width,float height, string unit)
{
float vol;
   if(unit=="meters")
	{
	vol=(length*width*height)/3;
	return vol;
	}
   if(unit=="millimeters")
	{
	vol==((length*width*height)/3)*1000;
	return vol;
	}
   if(unit=="centimeters")
	{
	vol=((length*width*height)/3)*100;
	return vol;
	}
   if(unit=="kilometers")
	{
	vol=((length*width*height)/3)/1000;
	return vol;
	}
}

