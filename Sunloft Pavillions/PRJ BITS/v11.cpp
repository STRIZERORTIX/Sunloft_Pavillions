#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void trexfur()
{
char ex[2];
double troqty,c;
cout<<endl<<"THE VARITIES OF TROPICAL AND EXORTIC FURITS WE HAVE ARE:";
cout<<endl<<"CHERIMOYA,(CODE NAME:CH)";
cout<<endl<<"DURIAN,(CODE NAME:DU)";
cout<<endl<<"LANGSAT,(CODE NAME:LA)";
cout<<endl<<"KIWANO,(CODE NAME:KI)";
cout<<endl<<"MANGOSTEEN,(CODE NAME:MS)";
cout<<endl<<"JACKFRUIT,(CODE NAME:JF)";
cout<<endl<<"APPLE,(CODE NAME:AL)";
cout<<endl<<"BANANA,(CODE NAME:BN)";
cout<<endl<<"PAPAYA,(CODE NAME:PP)";
cout<<endl<<"WHAT TROPICAL AND EXORTIC FURIT U WANT??:";
gets(ex);
cout<<endl<<"ENTER THE QUANTITY OF "<<ex<<":";
cin>>troqty;
if(strcmp(ex,"CH")==0)c=400*troqty;
if(strcmp(ex,"DU")==0)c=90*troqty;
if(strcmp(ex,"LA")==0)c=50*troqty;
if(strcmp(ex,"KI")==0)c=500*troqty;
if(strcmp(ex,"MS")==0)c=300*troqty;
if(strcmp(ex,"JF")==0)c=260*troqty;
if(strcmp(ex,"AL")==0)c=109*troqty;
if(strcmp(ex,"BN")==0)c=80*troqty;
if(strcmp(ex,"PP")==0)c=80*troqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
