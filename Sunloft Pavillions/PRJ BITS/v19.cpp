#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void ffp()
{
char ffp[10];
double fqty,c;
cout<<endl<<"THE VARITIES OF FRESH AND FROZEN PRODUCTS WE HAVE ARE:";
cout<<endl<<"KASSTHORI METHI,(CODE NAME:CU)";
cout<<endl<<"COW'S-MILK,(CODE NAME:CM)";
cout<<endl<<"MINT LEAVES,(CODE NAME:ML)";
cout<<endl<<"SHREDDED COCONUT,(CODE NAME:SC)";
cout<<endl<<"WHAT TYPE OF FRESH AND FROZEN PRODUCT U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(ffp);
cout<<endl<<"ENTER THE QUANTITY OF "<<ffp<<":";
cin>>fqty;
if(strcmp(ffp,"CU")==0)c=90*fqty;
if(strcmp(ffp,"CM")==0)c=65*fqty;
if(strcmp(ffp,"ML")==0)c=350*fqty;
if(strcmp(ffp,"SC")==0)c=150*fqty;
cout<<endl<<"THE PRICE OF UR  PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 ffp();
 getch();
}