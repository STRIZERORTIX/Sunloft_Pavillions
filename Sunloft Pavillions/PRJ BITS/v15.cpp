#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void le()
{
char le[10];
double leqty,c;
cout<<endl<<"THE VARITIES OF LEGUMES WE HAVE ARE:";
cout<<endl<<"CHANA DAL,(CODE NAME:CD)";
cout<<endl<<"URAD DAL,(CODE NAME:UD)";
cout<<endl<<"MOONG DAL,(CODE NAME:MD)";
cout<<endl<<"MASOOR DAL,(CODE NAME:MAD)";
cout<<endl<<"RAJMA,(CODE NAME:RJ)";
cout<<endl<<"PEANUTS,(CODE NAME:PE";
cout<<endl<<"VAAL DAL,(CODE NAME:VD)";
cout<<endl<<"TOOR DAL,(CODE NAME:TD)";
cout<<endl<<"MUNG BEANS,(CODE NAME:MB)";
cout<<endl<<"WHAT TYPE OF LEGUMES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(le);
cout<<endl<<"ENTER THE QUANTITY OF "<<le<<":";
cin>>leqty;
if(strcmp(le,"CD")==0)c=80*leqty;
if(strcmp(le,"UD")==0)c=60*leqty;
if(strcmp(le,"MD")==0)c=48*leqty;
if(strcmp(le,"MAD")==0)c=92*leqty;
if(strcmp(le,"RJ")==0)c=100*leqty;
if(strcmp(le,"PE")==0)c=40*leqty;
if(strcmp(le,"VD")==0)c=160*leqty;
if(strcmp(le,"TD")==0)c=59*leqty;
if(strcmp(le,"MB")==0)c=66*leqty; 
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 le();
 getch();
}
