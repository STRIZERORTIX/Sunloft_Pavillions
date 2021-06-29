#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void gr()
{
char GR[10];
double GRqty,c;
cout<<endl<<"THE VARITIES OF GRAINS WE HAVE ARE:";
cout<<endl<<"BASMATI RICE,(CODE NAME:BR)";
cout<<endl<<"BROWN BASMATHI RICE,(CODE NAME:BBR)";
cout<<endl<<"CRACKED WHEAT,(CODE NAME:CW)";
cout<<endl<<"FLATTENED RICE,(CODE NAME:FR)";
cout<<endl<<"PUFFED RICE,(CODE NAME:PR)";
cout<<endl<<"RAVA,(CODE NAME:RV)";
cout<<endl<<"ATTA FLOUR,(CODE NAME:AF)";
cout<<endl<<"MILLET FLOUR,(CODE NAME:MF)";
cout<<endl<<"BESAN FLOUR,(CODE NAME:BF)";
cout<<endl<<"WHAT TYPE GRAINS U WANT??,PLEASE WRITE IN BLOCK LETTERS:";
gets(GR);
cout<<endl<<"ENTER THE QUANTITY OF "<<GR<<":";
cin>>GRqty;
if(strcmp(GR,"BR")==0)c=72*GRqty;
if(strcmp(GR,"BBR")==0)c=140*GRqty;
if(strcmp(GR,"CW")==0)c=60*GRqty;
if(strcmp(GR,"FR")==0)c=76*GRqty;
if(strcmp(GR,"PR")==0)c=45*GRqty;
if(strcmp(GR,"RV")==0)c=40*GRqty;
if(strcmp(GR,"AF")==0)c=102.9*GRqty;
if(strcmp(GR,"MF")==0)c=140*GRqty;
if(strcmp(GR,"BF")==0)c=86*GRqty; 
cout<<endl<<"THE PRICE OF UR PRODUCT IS:"<<c;
cout<<endl<<"THANK YOU FOR CHOOSING ___________ HAVE A NICE DAY!";
}
void main()
{
 gr();
 getch();
}

