#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
class LOGIN
{
char eid1[25];
char eid2[25];
char pass1[50];
char pass2[50];
char pass[50];
public:
void signup();
void login();
}L;
void Members::signup() // getting details from new user
{
ofstream fout;
fout.open("S.dat",ios::binary);
fout.write((char*)&L,sizeof(L));
/*cout<<"\nEnter your Email ID:";
gets(eid1);
cout<<"\nEnter a valid password (min. 5 characters):";
gets(pass1);
x:cout<<"\nRe-Enter your password: ";
gets(pass2);
if(strcmp(pass1,pass2)==0)
cout<<"\nPassword is verified and stored";

else
{
cout<<"\nYour password is incorrect";
goto x;
}
*/
}
void Members::login()//to make customer login
{
ifstream fin;
fin.open("S.dat",ios::binary);
delay(2000);
z:cout<<"\nEnter your Email ID:";
gets(eid2);
y:cout<<"\nEnter password:";
gets(pass);
while(fin.read((char*)&L,sizeof(L)))
{
if((strcmp(eid2,eid1)==0) && (strcmp(pass,pass2)==0))
cout<<"\nLogin successful!!";
}
/*else if(strcmp(pass,pass2)!=0 && strcmp(eid2,eid1)==0)
{
cout<<"\nIncorrect password";
goto y;
}
else if(strcmp(eid2,eid1)!=0 && strcmp(pass,pass2)==0)
{
cout<<"\nIncorrect Email ID";
goto z;
} */
if((strcmp(eid2,eid1)!=0) && (strcmp(pass,pass2)!=0))
{
cout<<"\nWrong Entry";
delay(1800);
cout<<"\nTry Again";
goto z;
}

}
void main()
{
clrscr();
M.signup();
M.login();
getch();
}