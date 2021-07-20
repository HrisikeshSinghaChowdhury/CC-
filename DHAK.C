#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
   int graphdriver = VGA,graphmode=VGAHI,j,move,h=1,x;


   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");


   //dhak
  j=270;//308

   line(200,270,280,270);
   setviewport(300,270,380,230,1);
  //up
  while(!kbhit())
  {
  j=269;

   while(j>=230)
  {
   arc(180,380,135,220,125);
   ellipse(210,280,85,260,125,25);
   line(120,300,110,440);
   line(160,300,150,440);


   line(160,283,250,329);

   //ma
   arc(400,50,135,220,55);
   arc(342,50,305,75,55);
   circle(370,63,10);
   setfillstyle(SOLID_FILL,WHITE);
  floodfill(371,61,WHITE);

  arc(293,129,10,110,55);
  circle(320,107,8);
   setfillstyle(SOLID_FILL,WHITE);
  floodfill(321,107,WHITE);

  arc(443,129,85,170,55);
  circle(414,107,8);
  setfillstyle(SOLID_FILL,WHITE);
  floodfill(415,107,WHITE);

  line(369,120,369,190);
  arc(410,170,189,165,30);
  //kas ful


  line(160,j,280,270);
  delay(100);
  if(j==230)
  {

  break;
  }
   j=j-2;h++;

   clearviewport();
   }

   }
   //arc(520,80,185,200,125);
   getch();
}
