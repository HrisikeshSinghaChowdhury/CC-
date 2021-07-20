#include<stdio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
   int graphdriver = VGA,graphmode=VGAHI,x=112,y=330,i;
   int errorcode;
   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

  /* ellipse(x1,y1,stangle,endangle,xradius,yradius);
   ellipse(60,100,10,8,10,8);
   ellipse(150,100,10,8,10,8);
   arc(111,140,170,10,25);*/
   setbkcolor(15);
   for(i=1;i<=10;i++)
   {
   while(y<=400)
   {
    putpixel(x++,y,0);
    }
    y++;
    }


   delay(6000);
   cleardevice();


    closegraph();
}
