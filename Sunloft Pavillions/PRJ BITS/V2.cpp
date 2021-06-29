#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
void deals()
{
 cout<<endl<<"\t\t --------------------------------------------";
cout<<endl<<"\t\t |             TODAY'S DEALS:                |";
cout<<endl<<"\t\t ---------------------------------------------";
cout<<endl;
cout<<"\t\t_______________________________________________";
cout<<"\t\t\t\t         PRODUCT NAME   QUANTITY     MRP    OFFER PRICE "<<endl;
cout<<endl<<"\t     \t   tomato    "<<"     1KG"<<"       60"<<"      RS.30     "<<endl;
cout<<endl<<"\t     \t   potato    "<<"     2KG"<<"       75"<<"      RS.40     "<<endl;
cout<<endl<<"\t     \t   brinjal   "<<"     3KG"<<"       50"<<"      RS.20     "<<endl;
cout<<endl<<"\t     \t   onion     "<<"     4KG"<<"       40"<<"      RS.10     "<<endl;
cout<<endl<<"\t     \t   carrot    "<<"     5KG"<<"       95"<<"      RS.55     "<<endl;
cout<<"\t\t______________________________________________";
delay(10000);
}

void main()
{
deals();
getch();
}