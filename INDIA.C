#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>


void main()
{
   int graphdriver = VGA,graphmode=VGAHI,x=260,y=12,i,j,k=45,t;


   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");
   setbkcolor(1);
  x=256;
 for(j=1;j<=20;j++)
  putpixel(x++,10,12);
  x=254;
  putpixel(254,11,12);
  putpixel(254,12,12);
  for(j=1;j<=5;j++)
  putpixel(x--,14,12);
    putpixel(x,12,12);
  putpixel(254,11,12);
  y=12;
  for(x=254;x>=240;x--)
  putpixel(x,y++,12);
  x=240;
  for(j=1;j<=10;j++)
  putpixel(x++,y,12);
  for(j=1;j<=5;j++)
  putpixel(x,y++,12);
  for(j=1;j<=5;j++)
  putpixel(x++,y,12);
  for(j=1;j<=5;j++)
  putpixel(x,y++,12);
  for(j=1;j<=5;j++)
  putpixel(x++,y,12);
  x=254;
  while(x>=248)
  putpixel(x--,y++,12);
  for(j=1;j<=5;j++)
  putpixel(x,y++,12);
  for(j=1;j<=19;j++)
  putpixel(x,y++,12);
  for(j=1;j<=15;j++)
  putpixel(x++,y++,12);
  for(j=1;j<=10;j++)
  putpixel(x++,y++,12);
  for(j=1;j<=5;j++)
  putpixel(x++,y,12);

  for(j=1;j<=5;j++)
  putpixel(x--,y++,12);
  k=1;
  while(k<=10)
  {

  for(j=1;j<=5;j++)
  putpixel(x--,y++,12);
  k++;
  }

  for(j=1;j<=5;j++)
  putpixel(x,y++,12);

  k=1;
  while(k<=5)
  {

  for(j=1;j<=5;j++)
  putpixel(x--,y++,12);//////////////////**
  k++;
  }

  for(j=1;j<=5;j++)
  putpixel(x--,y--,15);//upper_bend

  for(j=1;j<=5;j++)
  putpixel(x,y++,15);

  for(j=1;j<=7;j++)
  putpixel(x--,y,15);

  for(j=1;j<=5;j++)
  putpixel(x--,y--,15);


  for(j=1;j<=19;j++)
  putpixel(x--,y++,15);/////////////////////////
  for(j=1;j<=10;j++)
  putpixel(x++,y++,15);


  for(j=1;j<=5;j++)
  putpixel(x++,y++,15);

  for(j=1;j<=5;j++)
  putpixel(x--,y++,15);

  for(j=1;j<=5;j++)
  putpixel(x++,y++,15);

  k=1;
  while(k<=2)
  {

  for(j=1;j<=5;j++)
  putpixel(x++,y++,15);
  k++;
  }

  for(j=1;j<=5;j++)
  putpixel(x--,y++,15);

  for(j=1;j<=5;j++)
  putpixel(x--,y--,15);

  for(j=1;j<=16;j++)
  putpixel(x--,y++,15);


  for(j=1;j<=11;j++)
  putpixel(x--,y--,15);

  for(j=1;j<=5;j++)
  putpixel(x++,y++,15);

  x=x-6;
  for(j=1;j<=10;j++)
  putpixel(x--,y++,15);

  for(j=1;j<=15;j++)
  putpixel(x++,y++,15);

  for(j=1;j<=15;j++)
  putpixel(x++,y--,15);

  for(j=1;j<=2;j++)
  putpixel(x++,y--,15);

  for(j=1;j<=10;j++)
  putpixel(x++,y,15);

  for(j=1;j<=25;j++)
  putpixel(x--,y++,15);


  for(j=1;j<=15;j++)
  putpixel(x--,y,15);

  for(j=1;j<=25;j++)
  putpixel(x++,y++,15);

  for(j=1;j<=15;j++)
  putpixel(x++,y,15);

  for(j=1;j<=25;j++)
  putpixel(x++,y--,15);

  for(j=1;j<=5;j++)
  putpixel(x++,y++,15);//////////////////***
  k=1;
  while(k<=5)
  {

  for(j=1;j<=5;j++)
  putpixel(x,y++,2);
   k++;
   }
   k=1;
  while(k<=7)
  {
  for(j=1;j<=5;j++)
  putpixel(x++,y++,2);

  for(j=1;j<=10;j++)
  putpixel(x++,y++,2);

  for(j=1;j<=5;j++)
  putpixel(x,y++,2);
  k++;}            /////////////////////*end
  k=1;
  for(j=1;j<=15;j++)
  putpixel(x++,y--,2);

  for(j=1;j<=5;j++)
  putpixel(x++,y--,2);

  for(j=1;j<=5;j++)
  putpixel(x++,y,2); ////////////////////

  for(j=1;j<=5;j++)
  putpixel(x--,y--,2);


  for(j=1;j<=15;j++)
  putpixel(x++,y--,2);

  for(j=1;j<=19;j++)
  putpixel(x,y--,2);

  for(j=1;j<=15;j++)
  putpixel(x++,y--,2);

  for(j=1;j<=35;j++)
  putpixel(x,y--,2);
  k=1;
  while(k<=3)
  {
  for(j=1;j<=15;j++)
  putpixel(x++,y--,2);

  for(j=1;j<=5;j++)
  putpixel(x,y--,2); ////////////////////***east
  k++;
  }
  k=1;
  while(k<=6)
  {
  for(j=1;j<=10;j++)
  putpixel(x++,y,15);

  for(j=1;j<=5;j++)
  putpixel(x,y--,15);
  k++;
  }
  k=1;
  while(k<=5)
  {

  for(j=1;j<=10;j++)
  putpixel(x,y--,15);

  for(j=1;j<=5;j++)
  putpixel(x--,y--,15);//////////west bengal
  k++;
  }

  for(j=1;j<=15;j++)
  putpixel(x++,y,12);

  for(j=1;j<=5;j++)
  putpixel(x++,y++,12);

  for(j=1;j<=10;j++)
  putpixel(x,y++,12);

  for(j=1;j<=39;j++)
  putpixel(x++,y,12);

  for(j=1;j<=10;j++)
  putpixel(x--,y++,12);

  for(j=1;j<=10;j++)
  putpixel(x++,y++,12);

  for(j=1;j<=10;j++)
  putpixel(x++,y--,12);

  for(j=1;j<=19;j++)
  putpixel(x++,y++,12);

  for(j=1;j<=10;j++)
  putpixel(x++,y,12);


  for(j=1;j<=5;j++)
  putpixel(x++,y--,12);


  for(j=1;j<=29;j++)
  putpixel(x,y--,12);


  for(j=1;j<=40;j++)
  putpixel(x++,y--,12);

  for(j=1;j<=10;j++)
  putpixel(x,y--,12);

  for(j=1;j<=25;j++)
  putpixel(x--,y,12);

  for(j=1;j<=10;j++)
  putpixel(x,y--,12);

  for(j=1;j<=36;j++)
  putpixel(x--,y++,12);


  for(j=1;j<=70;j++)
  putpixel(x--,y,12);

  for(j=1;j<=10;j++)
  putpixel(x,y--,12);

  for(j=1;j<=10;j++)
  putpixel(x--,y,12);


  for(j=1;j<=10;j++)
  putpixel(x,y++,12);
  k=1;
  while(k<=5)
  {
  for(j=1;j<=10;j++)
  putpixel(x--,y--,12);

  for(j=1;j<=10;j++)
  putpixel(x--,y,12);

  k++;
  }
   k=1;
  while(k<=6)
  {
  for(j=1;j<=5;j++)
  putpixel(x++,y--,12);

  for(j=1;j<=3;j++)
  putpixel(x--,y,12);

  k++;
  }

  k=1;
  while(k<=3)
  {
  for(j=1;j<=5;j++)
  putpixel(x--,y--,12);

  for(j=1;j<=5;j++)
  putpixel(x--,y,12);

  k++;
  }

  for(j=1;j<=10;j++)
  putpixel(x++,y--,12);


  for(j=1;j<=5;j++)
  putpixel(x++,y,12);

  for(j=1;j<=8;j++)
  putpixel(x,y--,12);


  for(j=1;j<=10;j++)
  putpixel(x--,y--,12);

  for(j=1;j<=10;j++)
  putpixel(x++,y--,12);


  for(j=1;j<=30;j++)
  putpixel(x--,y,12);

  for(j=1;j<=10;j++)
  putpixel(x--,y--,12);

  for(j=1;j<=30;j++)
  putpixel(x--,y,12);

  x=520;y=320;
   for(j=1;j<=10;j++)
   putpixel(x,y++,12);
   for(j=1;j<=6;j++)
   putpixel(x++,y=y+4,12);
   x=525;y=320;
   for(j=1;j<=6;j++)
   putpixel(x++,y=y+2,12);

   y=y+20;
   for(j=1;j<=6;j++)
   putpixel(x=x+6,y++,12);

   for(j=1;j<=6;j++)
   putpixel(x++,y,12);
   putpixel(x,y,12);

   x=170;y=320;

   for(j=1;j<=7;j++)
   putpixel(x++,y=y+4,12);
   x=160;
   for(j=1;j<=6;j++)
   putpixel(x++,y++,12);
   ellipse(320,200,220,219,60,50);

   x=380;y=210;
   for(j=1;j<=50&&x>=270;j++)
   putpixel(x=x-3,y--,15);


   x=320;y=150;
   for(j=1;j<=50&&y<=246;j++)
   putpixel(x,y=y+3,15);



   x=330;y=190;
   for(j=1;j<=48&&x>=270;j++)
   putpixel(x=x-3,y++,15);
   x=330;y=190;

   for(j=1;j<=4&&y>=140;j++)
   {
  x=x+8;y=y-3;
  }
  x=371;
   for(j=1;j<=60&&x>=320;j++)
   putpixel(x=x-3,y++,15);
   t=x;///////////////////end of three lines
   for(j=1;j<=30;j++)
   putpixel(x=x-2,y,15);
   x=t;
   for(j=1;j<=30;j++)
   putpixel(x=x+2,y,15);
   x=t;
   y=190;
   for(j=1;j<=30&&y<=240;j++)
   putpixel(x--,y=y+2,15);
   y=190;
   x=t+4;
   for(j=1;j<=30&&y>=155;j++)//y=190
   putpixel(x++,y=y-2,15);
   x=t+4;
   y=190;

   for(j=1;j<=30&&y<=240;j++)
   putpixel(x++,y=y+2,15);
   x=t+4;
   y=190;
   for(j=1;j<=30&&y>=155;j++)
   putpixel(x--,y=y-2,15);

    x=t+4;
    y=190;
   for(j=1;j<=30&&y<=230;j++)
   putpixel(x=x+2,y=y+2,15);

   x=t+4;
   y=190;
   for(j=1;j<=30&&y<=235;j++)
   putpixel(x=x-2,y=y+2,15);

   getch();
   closegraph();

 }
