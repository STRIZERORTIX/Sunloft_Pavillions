#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void load()
{
clrscr();
	   for(int j=0;j<101;j++)
		   {
		   delay(10);
		   clrscr();
		   cout<<"\n\n\n\n\n\t\t\t\tLOADING:"<<j<<"%";
		   }
	   clrscr();
}

void main()
{load();getch();}