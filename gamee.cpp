#include<iostream>
#include<windows.h>
using namespace std;
void title();
void maze();
void gotoxy(int x,int y);
void gotoab(int a,int b);
void gotomn(int m,int n);
void gotocd(int c,int d);

void eraseenemy1();
void printenemy1();
void moveenemy1();
void heroleft();
void heroup();
void herodown();
void heroright();
void printhero();
void erasehero();
void eraseenemy2();
void printenemy2();
void moveenemy2();
void printenemy3();
void eraseenemy3();
void moveenemy3();

int x=45,y=7;
int a=3,b=19;
int m=110,n=21;
int c=100,d=17;

main()
{
system("cls");
title();
maze();
while(true)
{
if(GetAsyncKeyState(VK_LEFT))
{
   heroleft();
}
if(GetAsyncKeyState(VK_RIGHT))
{
   heroright();
}
if(GetAsyncKeyState(VK_DOWN))
{
  herodown();
}
if(GetAsyncKeyState(VK_UP))
{
  heroup();
}
moveenemy3();
moveenemy1();
moveenemy2();
Sleep(200);
}
}

void heroup()
{
erasehero();
b=b-1;
printhero();
}

void herodown()
{
erasehero();
b=b+1;
printhero();
} 

void heroleft()
{
erasehero();
a=a-1;
printhero();
}

void heroright()
{
erasehero();
a=a+1;
printhero();
}

void gotoab(int a,int b)
{
COORD coordinates;
coordinates.X=a;
coordinates.Y=b;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printhero()
{
gotoxy(a,b);
cout<<"(\\ _ /) ";
gotoxy(a,b+1);
cout<<"( 'X' ) ";
gotoxy(a,b+2);
cout<<"c(')(')";
}

void erasehero()
{
gotoxy(a,b);
cout<<"       ";
gotoxy(a,b+1);
cout<<"       ";
gotoxy(a,b+2);
cout<<"        ";
}


void moveenemy1()
{
eraseenemy1();
y=y+1;
if(y==22)
  {
  y=7;
  }
printenemy1();
}


void moveenemy2()
{
eraseenemy2();
m=m-1;
if(m==60)
  {
  m=110;
  }
printenemy2();
}


void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X=x;
coordinates.Y=y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void gotomn(int m,int n)
{
COORD coordinates;
coordinates.X=m;
coordinates.Y=n;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void printenemy1()
{
gotoxy(x,y);
cout<<"  _____";
gotoxy(x,y+1);
cout<<" ( O o )";
gotoxy(x,y+2);
cout<<" /  O  \\";
gotoxy(x,y+3);
cout<<"/       \\";
}

void eraseenemy1()
{
gotoxy(x,y);
cout<<"          ";
gotoxy(x,y+1);
cout<<"          ";
gotoxy(x,y+2);
cout<<"          ";
gotoxy(x,y+3);
cout<<"          ";
}

void printenemy2()
{
gotoxy(m,n);
cout<<"  _____";
gotoxy(m,n+1);
cout<<" ( O o )";
gotoxy(m,n+2);
cout<<" /  O  \\";
gotoxy(m,n+3);
cout<<"/       \\";
}


void eraseenemy2()
{
gotoxy(m,n);
cout<<"          ";
gotoxy(m,n+1);
cout<<"          ";
gotoxy(m,n+2);
cout<<"          ";
gotoxy(m,n+3);
cout<<"          ";
}


void title()
{
cout<<"                            #####    #    #   ##    #   ##    #   #   #       #####     #    #   ##    #     "<<endl;
cout<<"                            #    #   #    #   # #   #   # #   #    # #        #    #    #    #   # #   #     "<<endl;
cout<<"                            #####    #    #   #  #  #   #  #  #     #         #####     #    #   #  #  #     "<<endl;
cout<<"                            #    #   #    #   #   # #   #   # #     #         #    #    #    #   #   # #     "<<endl;
cout<<"                            #####     ####    #    ##   #    ##     #         #     #    ####    #    ##     "<<endl;
} 

void maze()
{
cout<<"**********************************************************************************************************************************************"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        F   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        I   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        N   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        I   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        S   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                        H   *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"*                                                                                                                                            *"<<endl;
cout<<"**********************************************************************************************************************************************"<<endl;

}


void printenemy3()
{
gotocd(c,d);
cout<<"  _____";
gotocd(c,d+1);
cout<<" ( O o )";
gotocd(c,d+2);
cout<<" /  O  \\";
gotocd(c,d+3);
cout<<"/       \\";
}

void eraseenemy3()
{
gotocd(c,d);
cout<<"           ";
gotocd(c,d+1);
cout<<"           ";
gotocd(c,d+2);
cout<<"           ";
gotocd(c,d+3);
cout<<"           ";
}

void moveenemy3()
{
eraseenemy3();
d=d-1;
c=c-2;
if(d==5)
    {
    c=100;
    d=17;
    }
printenemy3();
}


void gotocd(int c,int d)
{
COORD coordinates;
coordinates.X=c;
coordinates.Y=d;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}









