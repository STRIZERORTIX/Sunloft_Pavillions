#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
void showmouseptr();
int initmouse();
void changecursor(int *shape);
union REGS i,o;
struct SREGS s;
 
int cursor[32]={
 0x0000, 0x0000, 0x0000, 0x0000,
 0x8001, 0xc003, 0xf00f, 0xfc3f,
 0xfcff, 0xfcff, 0xfcff, 0xfcff,
 0x0000, 0x0000, 0x0000, 0x0000,
 0xffff, 0x8001, 0xffff, 0x8001,
 0x4002, 0x2004, 0x1008, 0x0240,
 0x0240, 0x0810, 0x2004, 0x4002,
 0x8001, 0xffff, 0x8001, 0xffff,
  };
    void  main ()
     {
     int gd=DETECT,gm;
     initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
     gotoxy(10,3);
     //printf("HELLO");
     changecursor(cursor);
     showmouseptr();
     getch();
     }
    int initmouse()
     {
 
        i.x.ax=0;
        int86(0x33,&i,&o);
        return(o.x.ax);
     }
    void showmouseptr()
     {
    i.x.ax=1;
    int86(0x33,&i,&o);
     }
   void  changecursor(int *shape)
    {
    i.x.ax=9;
    i.x.bx=0;
    i.x.cx=0;
    i.x.dx=(unsigned)shape;
    segread(&s);
    s.es=s.ds;
    int86(0x33,&i,&i);
 
 }