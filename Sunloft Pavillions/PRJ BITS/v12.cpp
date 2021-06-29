#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void berr()
{
char ber[2];
double c,berqty;
cout<<endl<<"THE VARITIES OF BERRIES WE HAVE ARE:";
cout<<endl<<"BLUE BERRIES,(CODE NAME:BB)";
cout<<endl<<"RASP BERRIES,(CODE NAME:RB)";
cout<<endl<<"GOJI BERRIES,(CODE NAME:GB)";
cout<<endl<<"STRABERRIES,(CODE NAME:SB)";
cout<<endl<<"BILBERRIES,(CODE NAME:BIB)";
cout<<endl<<"ACAIBERRIES,(CODE NAME:AB)";
cout<<endl<<"CRANBERRIES,(CODE NAME:CRB)";
cout<<endl<<"GRAPES,(CODE NAME:GP)";
cout<<endl<<"WHAT BERRIE U WANT??:";
gets(ber);
cout<<endl<<"ENTER THE QUANTITY OF "<<ber<<":";
cin>>berqty;
if(strcmp(ber,"BB")==0)c=175.2*berqty;
if(strcmp(ber,"RB")==0)c=180*berqty;
if(strcmp(ber,"GB")==0)c=265.2*berqty;
if(strcmp(ber,"SB")==0)c=84*berqty;
if(strcmp(ber,"BIB")==0)c=700*berqty;
if(strcmp(ber,"AB")==0)c=365*berqty;
if(strcmp(ber,"CRB")==0)c=175*berqty;
if(strcmp(ber,"GP")==0)c=100*berqty; 
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 berr();
 getch();
}