#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void seveg()
{
char sed[2];
double sdqty,c;
cout<<endl<<"THE TYPES OF SEED VEGETABLES ARE:";
cout<<endl<<"ASPARAGUS,(CODE NAME:AS)";
cout<<endl<<"BEAN,(CODE NAME:BE)";
cout<<endl<<"SPROUTS,(CODE NAME:SP)";
cout<<endl<<"CABBAGE SEEDS,(CODE NAME:CB)";
cout<<endl<<"PLEASE ENTER THR SEEDTYPE VEGE U WANT:";
gets(sed);
cout<<endl<<"ENTER THE QUANTITY OF "<<sed<<":";
cin>>sdqty;
if(strcmp(sed,"AS")==0)c=115*sdqty;
if(strcmp(sed,"BE")==0)c=49*sdqty;
if(strcmp(sed,"SP")==0)c=73*sdqty;
if(strcmp(sed,"CB")==0)c=18.5*sdqty;
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{seveg();getch();}