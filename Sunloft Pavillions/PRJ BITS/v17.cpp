#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void rps()
{
char rps[10];
double rpqty,c;
cout<<endl<<"THE VARITIES OF  READYMADE POWDERED SPICES WE HAVE ARE:";
cout<<endl<<"REDCHILLI POWDER,(CODE NAME:RE) ";
cout<<endl<<"GARAM MASALA,(CODE NAME:GM)";
cout<<endl<<"TUMERIC POWDER,(CODE NAME:TP)";
cout<<endl<<"BIRIYANI MASALA,(CODE NAME:BM)";
cout<<endl<<"PAVBHAJI MASALA,(CODE NAME:PM)";
cout<<endl<<"SAMABAR POWDER,(CODE NAME:SM)";
cout<<endl<<"RASAM POWDER,(CODE NAME:RM)";
cout<<endl<<"CORRIANDERLEAVES POWDER,(CODE NAME:CP)";
cout<<endl<<"PEPPER POWDER,(CODE NAME:PP)";
cout<<endl<<"WHAT TYPE OF READYMADE POWDERED SPICES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(rps);
cout<<endl<<"ENTER THE QUANTITY OF "<<rps<<":";
cin>>rpqty;
if(strcmp(rps,"RE")==0)c=135*rpqty;
if(strcmp(rps,"GA")==0)c=26*rpqty;
if(strcmp(rps,"TP")==0)c=130*rpqty;
if(strcmp(rps,"BM")==0)c=350*rpqty;
if(strcmp(rps,"PM")==0)c=380*rpqty;
if(strcmp(rps,"SM")==0)c=83*rpqty;
if(strcmp(rps,"RM")==0)c=48*rpqty;
if(strcmp(rps,"CP")==0)c=36*rpqty;
if(strcmp(rps,"PP")==0)c=144*rpqty; 
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 rps();
 getch();
}