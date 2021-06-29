#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void mel()
{
char mel[10];
double c,melqty;
cout<<endl<<"THE VARITIES OF MELONS WE HAVE ARE:";
cout<<endl<<"WATER MELON,(CODE NAME:WM)";
cout<<endl<<"SHARLYN MELON,(CODE NAME:SM)";
cout<<endl<<"MUSK MELON,(CODE NAME:MM)";
cout<<endl<<"PERSIAN MELON,(CODE NAME:PEM)";
cout<<endl<<"CASABA MELON,(CODE NAME:CSM)";
cout<<endl<<"WHAT MELON U WANT??:";
gets(mel);
cout<<endl<<"ENTER THE QUANTITY OF "<<mel<<":";
cin>>melqty;
if(strcmp(mel,"WM")==0)c=60.7*melqty;
if(strcmp(mel,"SM")==0)c=70*melqty;
if(strcmp(mel,"MM")==0)c=65*melqty;
if(strcmp(mel,"PEM")==0)c=150*melqty;
if(strcmp(mel,"CSM")==0)c=90*melqty;
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 mel();
 getch();
}