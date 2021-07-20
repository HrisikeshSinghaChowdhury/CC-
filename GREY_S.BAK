#include<graphics.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>


void main()
{
   int graphdriver = VGA,graphmode=VGAHI,x=260,y=12,i,j,k=45,t,c,midx,midy;


   initgraph(&graphdriver,&graphmode,"C:\\Turboc3\\BGI");
   setbkcolor(15);
   //left eyebrow
   x=80;
  j=159;
  while(j>=154)
  putpixel(x=x+2,j=j-1,8);
  x=99;
 j=154;

  while(j<=157)
  {
     putpixel(x=x+2,j,8);
     j++;
  }
    while(j>=155)
    {
    putpixel(x=x+2,j--,8);
  }
  while(j<=166)
  {
  putpixel(x=x+3,j++,8);
 }
  x=x-20;
  j=164;
  while(j>=161)
  {
   putpixel(x=x-2,j--,8);
  }
 x=x-9;j=160;
  while(j<=164)
  {
     putpixel(x=x-2,j++,8);
  }
 // left_spec


  x=85;
  j=180;
  while(j>=170)
  {
     putpixel(x++,j--,8);
  }
  while(x<=143)
  {
     putpixel(x=x+1,j,8);
  }
  while(j<=174)
  {
     putpixel(x=x+2,j++,8);
  }
  while(j<=190)
  {
     putpixel(x,j++,8);//y=190
  }
  while(j<=220)
  {
     putpixel(x--,j=j+3,8);
  }

  while(x>=85) ////////////////////////1st
  {
     putpixel(x=x-2,j,8);
  }
  while(j>=230)
  {
     putpixel(x--,j--,8);
  }

  while(j>=180)
  {
     putpixel(x,j=j-2,8);
  }


  //left eye lids

  x=x+17;

  j=185;
  while(j>=178)
  {
     putpixel(x=x+2,j--,8);
  }
  x=x+5;
  while(j<=183)
  {
     putpixel(x=x+3,j++,8);
  }

  //left_eye
   x=x-40;
   j=j+10;
   while(j>=187)
  {
     putpixel(x=x+2,j=j-1,8);
  }
  x=x+4;
   while(j<=192)
  {
     putpixel(x=x+3,j=j+1,8);
  }










  //left eye_ball
  x=123;
  c=x;
  j=189;
  for(i=j;i<=193;i++)
  {
     x=c;
     while(x<=127)
     {
	putpixel(x++,i,8);
     }
  }
   //ellipse(124,193,220,2,15,6);
   ellipse(124,193,200,2,18,6);

  //spec_middle_handle
   x=160;
  c=x;
  j=179;
  while(x<=178)
  putpixel(x++,j,8);
  j=185;
  x=160;
  while(x<=178)
  putpixel(x++,j,8);
 /* for(i=j;i<=190;i++)
  {
     x=c;
     while(x<=174)
     {
	putpixel(x++,i,15);
     }
  }*/
  //x=191
  //y=175




  //right eyebrows
  j=174;
  while(j>=165)
  {
     putpixel(x++,j--,8);
  }
  while(j>=153)
  {
     putpixel(x=x+4,j--,8);
  }
  j=152;
  while(j<=155)
  {
     putpixel(x=x+2,j++,8);
  }
  x=203;j=168;
  while(j>=164)
  putpixel(x=x+3,j=j-1,8);
  x=x+4;
  while(j<=168)
  putpixel(x=x+3,j++,8);

   //x=293
  x=230;j=170;

  //y=160

  //right_spec
  x=170;
  j=190;
  while(j>=178)
  {
     putpixel(x=x+2,j=j-2,8);
  }
  j=j-6;
  x=x+7;
  while(x<=240)
  {
     putpixel(x++,j,8);
  }
  while(j<=170)
  {
     putpixel(x=x+2,j++,8);
  }
  x=x+10;
  while(j<=210)
  {
     putpixel(x,j=j+2,8);
  }

 // while(j<=229)
  {
     putpixel(x=x-2,j++,8);
  }
  j=j+5;
  x=x-5;
  while(x>=200)
  {
     putpixel(x=x-2,j,8);
  }
  x=186;
  while(j>=190)
  {
     putpixel(x=x-1,j=j-3,8);
  }

  //right eye lids
  x=190;j=189;
  while(x<=195)
    putpixel(x++,j,8);

    //printf("%d,%d",x,j);//x=220,y=195
    j=189;
   while(j>=185)
   putpixel(x=x+2,j=j-2,8);
   j=179;x=205;
   while(x<=215)
   putpixel(x=x+2,j,8);
   j=180;
   while(j<=184)
   putpixel(x=x+2,j++,8);
    //right eye_ball
 // ellipse(213,185,830,420,15,6);
   // ellipse(213,185,220,2,15,6);
    ellipse(213,185,203,10,19,11);
  x=209;
  c=x;
  j=181;
  for(i=j;i<=185;i++)
  {
     x=c;
    while(x<=212)
     {
	putpixel(x++,i,8);
     }
  }



  //nose


  j=250;x=140;
  while(j<=254)
  {
     putpixel(x=x+2,j++,8);
  }
  //x=162
  x=x+3;
  j=254;
  while(x<=180)
  {
     putpixel(x++,j,8);
  }

  while(j>=270)
  {
     putpixel(x=x+2,j--,8);
  }

  //moustache
  //left
  j=260;x=162;
   while(j<=270)
   putpixel(x,j++,8);
  j=260;x=158;
   while(j<=270)
   putpixel(x,j++,8);
   j=262;x=155;
   while(j<=270)
   putpixel(x--,j++,8);
   j=262;x=150;
   while(j<=273)
   putpixel(x--,j++,8);

   j=270;x=145;
   while(j<=275)
   putpixel(x--,j++,8);

   j=278;x=125;
   while(j<=282)
   putpixel(x--,j++,8);

  // j=286;x=120;
  // while(j<=288)
 //  putpixel(x--,j++,15);
   //right

   j=263;x=170;
   while(j<=270)
   putpixel(x++,j++,8);


   j=266;x=180;
   while(j<=272)
   putpixel(x++,j++,8);

   j=270;x=188;
   while(j<=275)
   putpixel(x++,j++,8);

   j=272;x=192;
   while(j<=277)
   putpixel(x++,j++,8);

   j=276;x=194;
   while(j<=283)
   putpixel(x++,j++,8);

  j=280;x=200;
  while(j<=282)
   putpixel(x++,j++,8);

  // j=285;x=210;
  // while(j<=288)
   //putpixel(x++,j++,15);
   //lips
  x=155;
  j=281;
  // while(x<=
     //lips
    x=150;
    while(x<=170)
    putpixel(x++,j,8);

    //forehead
    j=159;
    x=80;
    while(j>=105)
    putpixel(x=x+1,j=j-3,8);
    while(j>=85)
    putpixel(x=x+3,j=j-2,8);

    j=83;x=140;
   while(x<=180)
    putpixel(x=x+2,j,8);
    while(j<=97)
    putpixel(x=x+4,j++,8);
    while(j<=135)
    putpixel(x=x+1,j=j+2,8);

    while(j<=138)
    putpixel(x=x+2,j=j+1,8);
    j=j+3;x=x+3;

    while(j<=180)
    putpixel(x,j=j+2,8);/////////////////p3

    while(j<=189)
    putpixel(x=x+1,j=j+2,8);
    x=x-4;
    j=215;
    while(j<=234)
    putpixel(x=x-1,j=j+2,8);

   // while(j<=90)
   // putpixel(x=x+8,j=j+3,8);
  /*  while(j>=70)
    putpixel(x=x+2,j=j-2,15);
    x=x+5;j=j-10;
    while(x<=240)
    putpixel(x=x+2,j,15);

    while(j<=120)
    putpixel(x=x+2,j=j+3,15); */
    //chin
    //left ear
    x=68;
    j=192;
    while(j<=210)
    putpixel(x=x-1,j=j+2,8);
    while(j<=239)
    putpixel(x,j=j+3,8);
    j=j+10;

    while(j<=263)
    putpixel(x++,j++,8);
    //hair
    j=210;
    x=70;
    while(j>=170)
    putpixel(x=x-2,j=j-5,8);
    j=163;x=40;
    while(j>=150)
    putpixel(x=x+1,j=j-2,8);
    while(x>=35)
    putpixel(x=x-1,j,8);
    x=39;j=135;
    while(j>=100)
    putpixel(x=x+1,j=j-3,8);
    x=45;j=90;
    while(j>=80)
    putpixel(x=x+3,j=j-3,8);
    x=48;j=70;
    while(j>=40)
    putpixel(x=x+4,j=j-3,8);
    j=30;x=110;
    while(x<=160)
    putpixel(x=x+3,j,8);
    x=190;
    while(j<=40)
    putpixel(x=x+4,j=j+1,8);

    while(j<=80)
    putpixel(x=x+3,j=j+3,8);
    j=88;x=x+10;//////////////////////////////point
    while(j<=110)
    putpixel(x=x+1,j=j+3,8);
    j=210;
    x=64;
    while(j<=220)
    putpixel(x=x+1,j=j+3,8);
    j=230;
    while(j<=280)
    putpixel(x=x+1,j=j+3,8);
    while(j<=300)
    putpixel(x++,j=j+2,8);
    j=303;x=93;
    while(j<=320)
    putpixel(x=x+3,j=j+2,8);
    x=143;
   j=331;
   while(x<=160)
    putpixel(x=x+2,j,8);
    x=x+7;j=330;
    while(j<=332)
    putpixel(x=x+2,j=j+1,8);
   x=200;j=328;
   while(j>=320)
    putpixel(x=x+3,j=j-2,8);
    j=j-15;x=x+25;
    while(j>=290)
    putpixel(x=x+1,j=j-2,8);
    j=78;
    x=127;

   while(j<=110)
   putpixel(x=x-1,j=j+3,8);
    //beard
    x=150;j=315;
    while(j<=317)
    putpixel(x=x-1,j=j+1,8);

    x=153;j=310;
    while(j<=312)
    putpixel(x=x-1,j=j+1,8);

    x=150;j=310;
    while(j<=314)
    putpixel(x=x-1,j=j+1,8);


    x=145;j=310;
    while(j<=314)
    putpixel(x=x-1,j=j+1,8);

    x=140;j=310;
    while(j<=314)
    putpixel(x=x-1,j=j+1,8);


    x=130;j=306;
    while(j<=309)
    putpixel(x=x-1,j=j+1,8);


    x=160;j=315;
    while(j<=318)
    putpixel(x,j=j+1,8);


    x=118;j=306;
    while(j<=309)
    putpixel(x=x-1,j=j+1,8);


    x=180;j=310;
    while(j<=312)
    putpixel(x=x-1,j=j+1,8);


    x=180;j=315;
    while(j<=318)
    putpixel(x,j=j+1,8);

    x=183;j=312;
    while(j<=318)
    putpixel(x,j=j+1,8);


    x=190;j=306;
   while(j<=310)
    putpixel(x++,j=j+1,8);

    //right cheek
    x=248;j=280;
    while(j>=247)
    putpixel(x=x+1,j=j-4,8);


    //right neck

    x=239;j=315;
    while(j>=300)
    putpixel(x++,j=j-4,8);
    x=237;j=315;
    while(j<=329)
    putpixel(x,j=j+2,8);

    x=250;j=330;
    while(j<=350)
    putpixel(x=x+1,j=j+4,8);
    //left neck
    j=290;x=86;
    while(j<=310)
    putpixel(x,j=j+2,8);

    //colar
    j=305;

   while(j<=320)
   putpixel(x=x-2,j=j+1,8);
    j=305;x=77;
   while(j<=380)
   putpixel(x=x+1,j=j+2,8);
   textcolor(RED+BLINK);
    //2nd final
      midx = getmaxx()/2;
      midy = getmaxy()/2;

     setcolor(RED);
   settextstyle(SCRIPT_FONT, HORIZ_DIR, 3);
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(midx-140, midy+120, "S H U V O   D A");
      getch();
   closegraph();
  }