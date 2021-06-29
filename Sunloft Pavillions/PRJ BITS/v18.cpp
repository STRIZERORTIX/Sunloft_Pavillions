#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void oil()
{
char OIL[10];
double oqty,c;
cout<<endl<<"THE VARITIES OF OILS WE HAVE ARE:";
cout<<endl<<"SESAME OIL,(CODE NAME:S)";
cout<<endl<<"COCONUT OIL,(CODE NAME:CC)";
cout<<endl<<"MUSTARD OIL,(CODE NAME:MO)";
cout<<endl<<"GROUNDNUT OIL,(CODE NAME:GO)";
cout<<endl<<"WALUNT BARK OIL,(CODE NAME:WBO)";
cout<<endl<<"GINGELLY OIL,(CODE NAME:G)";
cout<<endl<<"WHAT TYPE OF OIL U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(OIL);
cout<<endl<<"ENTER THE QUANTITY OF "<<OIL<<":";
cin>>oqty;
if(strcmp(OIL,"S")==0)c=110*oqty;
if(strcmp(OIL,"CC")==0)c=300*oqty;
if(strcmp(OIL,"MO")==0)c=100*oqty;
if(strcmp(OIL,"GO")==0)c=280*oqty;
if(strcmp(OIL,"WBO")==0)c=300*oqty;
if(strcmp(OIL,"G")==0)c=225*oqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 oil();
 getch();
}