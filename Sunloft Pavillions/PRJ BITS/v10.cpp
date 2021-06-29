include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void stfur()
{
char stn[2];
double stnqty,c;
cout<<endl<<"THE VARITIES OF STONE FURITS WE HAVE ARE:";
cout<<endl<<"PEACH,(CODE NAME:PC)";
cout<<endl<<"NECTARINE,(CODE NAME:NE)";
cout<<endl<<"PLUMS,(CODE NAME:PU)";
cout<<endl<<"LYCHEES,(CODE NAME:LY)";
cout<<endl<<"MANGOS,(CODE NAME:MS)";
cout<<endl<<"ALMOND,(CODE NAME:AO)";
cout<<endl<<"APRICOTS,(CODE NAME:AR)";
cout<<endl<<"CHERRIES,(CODE NAME:CE)";
cout<<endl<<"WHAT STONE FURIT U WANT??:";
gets(stn);
cout<<endl<<"ENTER THE QUANTITY OF "<<stn<<":";
cin>>stnqty;
if(strcmp(stn,"PC")==0)c=250*stnqty;
if(strcmp(stn,"NE")==0)c=250*stnqty;
if(strcmp(stn,"PU")==0)c=200*stnqty;
if(strcmp(stn,"LY")==0)c=60*stnqty;
if(strcmp(stn,"MS")==0)c=130*stnqty;
if(strcmp(stn,"AO")==0)c=500*stnqty;
if(strcmp(stn,"AR")==0)c=140*stnqty;
if(strcmp(stn,"CE")==0)c=350*stnqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
