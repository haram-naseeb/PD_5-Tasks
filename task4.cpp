#include<iostream>
#include<cmath>
using namespace std;
string projecttimecalculation(int hours,int days,int workers);

int main()
{
int days,workers,hours;
string result;
cout<<"Enter the needed hours: ";
cin>>hours;
cout<<"Enter the days that the firm has: ";
cin>>days;
cout<<"Enter the number of all the workers: ";
cin>>workers;
result=projecttimecalculation(hours, days, workers);
cout<<result;
}

string projecttimecalculation(int hours,int days,int workers)
{
int present_days,projecttime,present_hours;
string output;
int totaldays=days*10;
present_days=totaldays-(totaldays*0.1);
present_hours=present_days*workers;


if(present_hours>=hours)
{
output="Yes!"+to_string(present_hours-hours)+" hours left";
return output;
}

if(present_hours<hours)
{
output="Not enough time!"+to_string(hours-present_hours)+" hours needed.";
return output;
}

}