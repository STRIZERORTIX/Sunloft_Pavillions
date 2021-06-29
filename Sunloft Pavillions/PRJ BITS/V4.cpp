#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void floveg()
{
char flo[2];
double floqty,c;

cout<<endl<<"THE TYPE OF FLOWER VEGETABLES ARE:";
cout<<endl<<"BRUSSELS SPROUTS,(CODE NAME:BU)";
cout<<endl<<"CABBAGE,(CODE NAME:CG)";
cout<<endl<<"CELERY,(CODE NAME:CE)";
cout<<endl<<"LETTUCE,(CODE NAME:LE)";
cout<<endl<<"PALAK,(CODE NAME:PL)";
cout<<endl<<"CAULIFLOWER,(CODE NAME:CF)";
cout<<endl<<"PLEASE ENTER THE FLOWER U WANT:";
gets(flo);
cout<<endl<<"ENTER THY QUANTITY OF "<<flo<<"(IN KG'S) PLEASE:";
cin>>floqty;
if(strcmp(flo,"BU")==0)c=700*floqty;
if(strcmp(flo,"CG")==0)c=25*floqty;
if(strcmp(flo,"CE")==0)c=149*floqty;
if(strcmp(flo,"LE")==0)c=49*floqty;
if(strcmp(flo,"PL")==0)c=60*floqty;
if(strcmp(flo,"CF")==0)c=40*floqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
	floveg();
getch();
}