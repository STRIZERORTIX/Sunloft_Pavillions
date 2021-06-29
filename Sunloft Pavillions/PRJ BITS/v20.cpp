#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
class acc
{
char name[30];
long double pno;
char adrs[50];
char city[15];
char state[20];
long int pcode;
char id1[25];
char id2[25];
char p1[50];
char p2[50];
char pass[50];
int i;
char a;
int n;
public:
void info();
}l;
void acc::info()
{
ofstream fout;
fout.open("log.dat",ios::binary);
fout.write((char*)&l,sizeof(l));
cout<<endl<<"ENTER UR NAME:";
gets(name);
cout<<endl<<"ENTER UR PHONE NUMBER:";
cin>>pno;
cout<<endl<<"ENTER DELIVERY ADDRESS:";
gets(adrs);
cout<<endl<<"ENTER UR STATE:";
gets(state);
cout<<endl<<"ENTER UR CITY:";
gets(city);
cout<<endl<<"ENTER UR PINCODE:";
cin>>pcode;
cout<<endl<<"ENTER UR EMAIL ID :";
gets(id1);
cout<<endl<<"ENTER THE LIMIT,MINIMUM OF 6 ELEMENTS IS A MUST!:";
cin>>n;
cout<<endl<<"ENTER UR PASSWORD:";
for(i=0;i<n;++i)
{
a=getch();
p1[i]=a;
cout<<"*";
if(a==' ')
--i;
}
x:cout<<endl<<"RE-ENTER UR PASSWORD FOR VERIFICATION PURPOSE PLEASE:";
for(i=0;i<n;++i)
{
a=getch();
p2[i]=a;
cout<<"*";
if(a==' ')
--i;
}
if(strcmp(p1,p2)==0)
{
delay(1500);
cout<<endl<<"PASSWORD IS VERIFIED";
}
else
{
cout<<endl<<"IT SEEMS THAT THE PASSWORD WHICH U HAVE ENTERED DOSEN'T MATCH PLEASE ENTER AGAIN";
goto x;
}

delay(2000);
clrscr();
cout<<endl<<"DEIRECTING U TO THE LOGIN PAGE";
delay(1500);
clrscr();
cout<<endl<<"HOLD ON FOR A MOMENT! ";
cout<<endl;
clrscr();
	   for(int j=0;j<101;j++)
		   {
		   delay(10);
		   clrscr();
		   cout<<"\n\n\n\n\n\t\t\t\t  LOADING"<<j<<"%";
		   }
	   clrscr();
delay(1200);
ifstream fin;
fin.open("log.dat",ios::binary);
delay(2000);
z:cout<<endl<<"ENTER UR EMAIL ID FOR LOGIN:";
gets(id2);
cout<<endl<<"ENTER THE LIMIT FOR PASSWORD,MINIMUM OF 6 ELEMENTS IS A MUST!:";
cin>>n;
cout<<endl<<"ENTER UR PASSWORD:";
for(i=0;i<n;++i)
{
a=getch();
pass[i]=a;
cout<<"*";
if(a==' ')
--i;
}
if((strcmp(id2,id1)==0) && (strcmp(pass,p2)==0))
{
cout<<endl<<"LOGIN SUCCESSFUL!";
delay(2800);
clrscr();
cout<<"\n\n\n\n\n\t\t\t\t  PLEASE WAIT...";
delay(1200);
clrscr();
cout<<endl<<"\n\n\n\n\n\t\t\t\t  DIRECTING U TO THE MENU!";
clrscr();
	   for(int j=0;j<101;j++)
		   {
		   delay(10);
		   clrscr();
		   cout<<"\n\n\n\n\n\t\t\t\t LOADING"<<j<<"%";
		   }
	   clrscr();

}
else
{
cout<<"\nWrong Entry";
delay(1800);
cout<<"\nTry Again";
goto z;
}
}
void main()
{info();getch();}