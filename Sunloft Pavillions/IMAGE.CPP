#include<fstream.h>
#include<conio.h>
void main()
{
char ch[4000];
ofstream fout;
fout.open("img.txt",ios::out);
while(!fout.eof())
{
get(ch);
fout<<ch;
}
fout.close();
getch();
}