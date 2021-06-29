#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void tuveg()
{
char tbr[2];
double c,tbrqty;
cout<<endl<<"THE TUBER TYPE VEGE'S ARE:";
cout<<endl<<"BEETROOT,(CODE NAME:BE)";
cout<<endl<<"CARROT,(CODE NAME:CR)";
cout<<endl<<"PARSNIPS,(CODE NAME:PR)";
cout<<endl<<"POTATOES,(CODE NAME:PT)";
cout<<endl<<"YAMS,(CODE NAME:YM)";
cout<<endl<<"PLEASE ENTER THE TUBER YOU WANT:";
gets(tbr);
cout<<endl<<"ENTER THE QUANTITY OF "<<tbr<<":";
cin>>tbrqty;
if(strcmp(tbr,"BE")==0)c=36*tbrqty;
if(strcmp(tbr,"CR")==0)c=39*tbrqty;
if(strcmp(tbr,"PR")==0)c=69*tbrqty;
if(strcmp(tbr,"PT")==0)c=55*tbrqty;
if(strcmp(tbr,"YM")==0)c=45*tbrqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{tuveg(); getch();}