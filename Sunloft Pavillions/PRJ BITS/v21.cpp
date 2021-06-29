#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void main()
{
char d,k;
int type,op;
clrscr();
cout<<endl<<"DO U HAVE A ACCOUNT? IF YES PLEASE ENTER 'S':";
cin>>k;
if(k=='s')
l.login();
else
{
l.signup();
l.login();
}
clrscr();
cout<<endl<<"ENTER 1 FOR BUYING VEGETABLES!";
cout<<endl<<"ENTER 2 FOR BUYING FURITS!";
cout<<endl<<"ENTER 3 FOR BUYING GROCERIES!";
cout<<endl<<"ENTER 4 FOR DAILY DEALS";
cout<<endl<<"WHAT DO YOU WANT?:";
int q;
cin>>q;
do{
switch(q)
{

case 1:    load();
	   cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF VEGES WE HAVE ARE AS FOLLOWS:";
	   cout<<endl<<" ENTER 1 FOR ROOT TYPE";
	   cout<<endl<<" ENTER 2 FOR FLOWER TYPE";
	   cout<<endl<<" ENTER 3 FOR LEAVES TYPE";
	   cout<<endl<<" ENTER 4 FOR TUBER TYPE";
	   cout<<endl<<" ENTER 5 FOR SEED TYPE";
	   cout<<endl<<" ENTER 6 FOR BULB TYPE";
	   cout<<endl<<"WHAT TYPE OF VEGETABLE U WANNA BUY? :";
	   cin>>type;
		   switch(type)
		   {
			case 1:roveg();break;
			case 2:floveg();break;
			case 3:tuveg();break;
			case 4:bubveg();break;
			case 5:seveg();break;
			case 6:leveg();break;
		   }

		   break;
case 2:    load();
		   cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF FURITS WE HAVE ARE AS FOLLOWS:";
		   cout<<endl<<" ENTER 1 FOR CITRUS FURITS";
		   cout<<endl<<" ENTER 2 FOR STONE FURITS";
		   cout<<endl<<" ENTER 3 FOR TROPICAL AND EXORTIC FURITS";
		   cout<<endl<<" ENTER 4 FOR BERRIES FURITS";
		   cout<<endl<<" ENTER 5 FOR MELONS";
		   cout<<endl<<"WHAT TYPE OF FRUITS U WANNA BUY? :";
		   int fur;
		   cin>>fur;
		   switch(fur)
		   {
			case 1:citfur();break;
			case 2:stfur();break;
			case 3:trexfur();break;
			case 4:berr();break;
			case 5:mel();break;
		   }
		   break;
case 3:load();
       cout<<endl<<"FOR UR REFFERENCE, THE TYPE OF GROCERIES WE HAVE ARE AS FOLLOWS:";
       cout<<endl<<"ENTER 1 FOR GRAINS";
       cout<<endl<<"ENTER 2 FOR LEGUMES";
       cout<<endl<<"ENTER 3 FOR SPICES";
       cout<<endl<<"ENTER 4 FOR READYMADE POWDERED SPICES";
       cout<<endl<<"ENTER 5 FOR OILS";
       cout<<endl<<"ENTER 6 FOR FRESH AND FROZEN PRODUCTS";
       cout<<endl<<"ENTER 7 FOR OTHER MISCELLANEOUS PRODUCTS";
       cout<<endl<<"ENTER UR OPINION:";
       cin>>op;
       switch(op)
       { case 1:gr();break;
	 case 2:le();break;
	 case 3:sp();break;
	 case 4:rps();break;
	 case 5:oil();break;
	 case 6:ffp();break;
	 case 7:omp();break;
	}
	break;
case 4:load();deals();break;
default : cout<<endl<<"PLEASE ENTER A VALID NUMBER!";break;
}
cout<<endl<<"PLEASE ENTER 'S' (OR) 's' TO GO BACK TO THE MENU:";
cin>>d;
}while(d=='s'||d=='S');
getch();
}