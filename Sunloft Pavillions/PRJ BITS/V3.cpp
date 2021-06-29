#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void roveg()
{
char r[2];double c,rootqty;
cout<<endl<<"THE AVAILABLE ROOT TYPE OF VEGETABLES ARE:";
cout<<endl<<"GARLICS,(CODE NAME:GR)";
cout<<endl<<"GINGERS,(CODE NAME:GI)";
cout<<endl<<"RADISHES,(CODE NAME:RD)";
cout<<endl<<"SWEET POTATOS,(CODE NAME:SW)";
cout<<endl<<"TURNIPS,(CODE NAME:TU)";
cout<<endl<<"PLEAS ENTER THE VEGE U WANT:";
gets(r);
cout<<endl<<"ENTER THE QUANTITY OF "<<r<<"(IN KG'S) PLEASE:";
cin>>rootqty;
if(strcmp(r,"GR")==0)c=189*rootqty;
if(strcmp(r,"GI")==0)c=209*rootqty;
if(strcmp(r,"RD")==0)c=39*rootqty;
if(strcmp(r,"SW")==0)c=79*rootqty;
if(strcmp(r,"TU")==0)c=99*rootqty;
cout<<endl<<"THE PRICE OF UR PRODUCTS IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}

void main()
{

roveg();
			getch();
}