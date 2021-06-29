#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void bubveg()
{
char blub[2];
double c,blbqty;
cout<<endl<<"THE BULB TYPE VEGE'S ARE :";
cout<<endl<<"CHIVES,(CODE NAME:CI)";
cout<<endl<<"WILD LEEK,(CODE NAME:WL)";
cout<<endl<<"FRNNEL BLUBLS,(CODE NAME:FB)";
cout<<endl<<"ONIONS,(CODE NAME:OI)";
cout<<endl<<"SHALLOTS,(CODE NAME:SH)";
cout<<endl<<"PLEASE ENETER THE BULB VEGE U WANT:";
gets(blub);
cout<<endl<<"ENTER THE QUANTIY OF "<<blub<<":";
cin>>blbqty;
if(strcmp(blub,"CI")==0)c=180*blbqty;
if(strcmp(blub,"WL")==0)c=150*blbqty;
if(strcmp(blub,"FB")==0)c=135*blbqty;
if(strcmp(blub,"OI")==0)c=59*blbqty;
if(strcmp(blub,"SH")==0)c=30*blbqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{bubveg(); getch();}