#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void citfur()
{
char cit[2];
double citqty,c;
cout<<endl<<"THE VARITIES OF CITRUS FURITS WE HAVE ARE:";
cout<<endl<<"MOSAMBI,(CODE NAME:MO)";
cout<<endl<<"ORANGE,(CODE NAME:OR)";
cout<<endl<<"TANGERINE,(CODE NAME:TI)";
cout<<endl<<"KEY LIME,(CODE NAME:KL)";
cout<<endl<<"BLOOD ORANGE,(CODE NAME:BO)";
cout<<endl<<"LEMON,(CODE NAME:LE)";
cout<<endl<<"WHAT CITRUS FURIT U WANT??:";
gets(cit);
cout<<endl<<"ENTER THE QUANTITY OF "<<cit<<"(IN KG'S PLEASE):";
cin>>citqty;
if(strcmp(cit,"MO")==0)c=169*citqty;
if(strcmp(cit,"OR")==0)c=100*citqty;
if(strcmp(cit,"TI")==0)c=640*citqty;
if(strcmp(cit,"KL")==0)c=800*citqty;
if(strcmp(cit,"BO")==0)c=1000*citqty;
if(strcmp(cit,"LE")==0)c=235*citqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 citfur();
 getch();
}