#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void sp()
{
char sp[10];
double spqty,c;
cout<<endl<<"THE VARITIES OF SPICES WE HAVE ARE:";
cout<<endl<<"RED CHILLI,(CODE NAME:RC)";
cout<<endl<<"GREEN CHILLI,(CODE NAME:GC)";
cout<<endl<<"BLACK MUSTARD SEEDS,(CODE NAME:BS)";
cout<<endl<<"CORIANDER SEEDS,(CODE NAME:CS)";
cout<<endl<<"CUMIN SEEDS,(CODE NAME:CUS)";
cout<<endl<<"CARDAMOM PODS,(CODE NAME:CP)";
cout<<endl<<"CLOVES,(CODE NAME:CL)";
cout<<endl<<"CINNAMON BARK,(CODE NAME:CB)";
cout<<endl<<"WHAT TYPE OF SPICES U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(sp);
cout<<endl<<"ENTER THE QUANTITY OF "<<sp<<":";
cin>>spqty;
if(strcmp(sp,"RC")==0)c=43*spqty;
if(strcmp(sp,"GC")==0)c=49*spqty;
if(strcmp(sp,"BS")==0)c=104*spqty;
if(strcmp(sp,"CS")==0)c=76*spqty;
if(strcmp(sp,"CUS")==0)c=59*spqty;
if(strcmp(sp,"CP")==0)c=200*spqty;
if(strcmp(sp,"CL")==0)c=200*spqty;
if(strcmp(sp,"CB")==0)c=55*spqty; 
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 sp();
 getch();
}