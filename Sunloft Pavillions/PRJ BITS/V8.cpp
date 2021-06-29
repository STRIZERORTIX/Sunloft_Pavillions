#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void leveg()
{
char lfy[2];
double lfyqty,c;
cout<<endl<<"THE TYPES OF LEAVES VEGE'S ARE :";
cout<<endl<<"KALE,(CODE NAME:KA)";
cout<<endl<<"MICROGREENS,(CODE NAME:MI)";
cout<<endl<<"ROMAINELETTUCE,(CODE NAME:RO)";
cout<<endl<<"TURNIPGREENS,(CODE NAME:TU)";
cout<<endl<<"ICEBERGLETTUCE,(CODE NAME:IE)";
cout<<endl<<"PLEASE ENTER THE LEAFY VEGE U WANT:";
gets(lfy);
cout<<endl<<"ENTER THE QUANTITY OF "<<lfy<<":";
cin>>lfyqty;
if(strcmp(lfy,"KA")==0)c=266*lfyqty;
if(strcmp(lfy,"MI")==0)c=299*lfyqty;
if(strcmp(lfy,"RO")==0)c=100*lfyqty;
if(strcmp(lfy,"TU")==0)c=64.5*lfyqty;
if(strcmp(lfy,"IE")==0)c=60*lfyqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{leveg();getch();}