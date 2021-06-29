#include <graphics.h>
#include <conio.h>

void main ()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TurboC3\\BGI");	
//setbkcolor(4);
rectangle (0,479,638,0);
outtextxy(220,20,"NUFRESH MARKET,CHENNAI");
line(0,50, 638, 50);
line(50,479,50,50);
outtextxy(10,60,"S.NO");

line(200,479,200,50);
outtextxy(70,60,"PROUCT NAME");
line(400,479,400,50);
outtextxy(260,60,"QUANTITY");
line(0,80,638,80);
outtextxy(500,60,"THE AMOUNT");
line(
getch ();
}
