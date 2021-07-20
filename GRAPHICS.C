#include<stdio.h>
#include<graphics.h>
void main()
{
   int graphdriver = VGA,graphmode=VGAHI,x1=112,y1=112,stangle=360,endangle=359,xradius=100,yradius=80;
   int errorcode;
   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

   ellipse(x1,y1,stangle,endangle,xradius,yradius);
   ellipse(60,100,10,8,10,8);
   ellipse(150,100,10,8,10,8);
   arc(111,140,170,10,25);
   setbkcolor(1);
   delay(6000);
   cleardevice();


    closegraph();
}
