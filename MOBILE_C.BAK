#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void ringtone();
void main()
{
   int graphdriver = VGA,graphmode=VGAHI,j,move,h=1,x,i=1;
   char ch[11];

   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");

   //tower
   line(120,440,150,360);
   line(320,440,290,360);
   line(150,360,290,360);

   line(320,440,160,360);
   line(120,440,290,360);
   line(150,360,150,440);
   line(290,360,290,440);

   line(150,360,170,270);
   line(290,360,260,270);
   line(170,270,260,270);

   line(170,360,170,270);
   line(260,360,170,280);
   line(260,360,260,270);

   line(170,270,190,180);
   line(260,270,230,180);
   line(190,180,230,180);

   line(190,270,190,180);
   line(230,270,230,180);
   line(230,180,190,270);



   line(190,180,200,120);
   line(230,180,220,120);
   line(200,120,220,120);

   line(230,180,200,120);

   line(200,120,207,80);
   line(218,120,210,80);
   line(207,80,210,80);

   line(208,80,209,40);
   line(210,80,208,40);

   //signal transmitter
   rectangle(160,100,190,210);
   setfillstyle(SOLID_FILL,WHITE);
   floodfill(163,107,WHITE);
   fillellipse(220,80,10,20); //20 10


   //mobile phone (caller)
    rectangle(480,0,600,180);
    rectangle(490,30,590,160);
    outtextxy(510,15," NOKIA");
    //keypad
     rectangle(500,163,520,170);
     rectangle(570,163,590,170);
     rectangle(530,160,560,170);


    //mobile phone (receiver)
    rectangle(480,200,620,440);
    rectangle(500,215,600,400);
    line(540,420,560,420);
    outtextxy(527,202,"SONY");

    gets(ch);//enter 10 digit ph no.
    outtextxy(510,55,"Calling...");

    outtextxy(510,85,"Hrisi");
    line(480,35,170,170);
    line(175,170,480,350);

    //contacts
    if(strcmp(ch,"8697101010")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Shuvo da ");
	    outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }
    else if(strcmp(ch,"9051162699")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Ma ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }
  else if(strcmp(ch,"7278614603")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Arpan ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }
   else  if(strcmp(ch,"7278168099")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Madam ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }
  else  if(strcmp(ch,"8961849532")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Sabyasachi ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }
       else  if(strcmp(ch,"7278774220")==0)
     {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Bhai ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }


    else
       {
	while(!kbhit())
	{
	    ringtone();
	    outtextxy(515,260,"Unknown ");
	     outtextxy(515,270," ");
	    outtextxy(515,280,"Calling");
	}

     }





   getch();
}
void ringtone()
{
    int k;
    for(k=800;k<=900;k=k+10)
    {
	sound(k);
	delay(10);
    }
    nosound();
}
