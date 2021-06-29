#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
class LOGIN
{
char eid[25];
char pass[50];
public:
void signup();
void login();
}L;
void LOGIN::signup()
{
char pass1[50];
ofstream fout;
fout.open("S.dat",ios::binary|ios::app);
cout<<"\nEnter your Email ID:";
gets(eid);
//ifstream fin;
//fin.open("S.dat",ios::binary);
/*while(fin.read((char*)&L,sizeof(L)))
{
if(strcmp(eid,eidn)==0)
{
cout<<"already exists";
}
else
{ */
cout<<"\nEnter a valid password (min. 5 characters):";
gets(pass);
x:cout<<"\nRe-Enter your password: ";
gets(pass1);
if(strcmp(pass,pass1)==0)
{
cout<<"\nPassword is verified and stored";
}
else
{
cout<<"\nYour password is incorrect";
goto x;
}
fout.write((char*)&L,sizeof(L));
}
void LOGIN::login()//to make customer login
{
char eid1[50];
char pass1[50];
ifstream fin;
fin.open("S.dat",ios::binary);

cout<<"\nEnter your Email ID:";
gets(eid1);
cout<<"\nEnter password:";
gets(pass1);
while(fin.read((char*)&L,sizeof(L)))
{
if((strcmp(eid,eid1)==0) || (strcmp(pass,pass1)==0))
cout<<"\nLogin successful!!";
}
if((strcmp(eid,eid1)!=0) || (strcmp(pass,pass1)!=0))
{
cout<<"\nIncorrect uname or password";
}
}}
void main()
{
clrscr();
L.signup();
L.login();
getch();

}