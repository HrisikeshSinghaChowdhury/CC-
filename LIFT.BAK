#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
static int x=0,active=0,ch;
static char s='G';
void sound_lift();
void ground_floor();
void first_floor();
void second_floor();
void third_floor();
void fourth_floor();
void fifth_floor();
void up(int a,int b,int c,int f);
void down(int p,int q,int r,int s);
void g_1();
void g_2();
void g_5();
void g_4();
void g_3();
void first_2();
void first_3();
void first_4();
void first_5();
void second_3();
void second_4();
void second_5();
void third_4();
void third_5();
void fourth_5();

void fifth_g();
void fifth_1();
void fifth_2();
void fifth_3();
void fifth_4();
void fourth_g();
void fourth_1();
void fourth_2();
void fourth_3();
void third_g();
void third_1();
void third_2();
void second_g();
void second_1();
void first_g();
void choice1();
void choice_from1();
void choice_from_g();
void choice_from4();
void choice_from5();
void choice_from3();
void choice_from2();
//void boundary(int x);
void main()
{
  int gd=DETECT,gm,i;
  initgraph(&gd,&gm,"C:\\Turboc3\\BGI");

   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  // settextjustify(CENTER_TEXT, CENTER_TEXT);
   outtextxy(0,140, "Welcome to Computer Science");
   outtextxy(250,180,"Complex");

   outtextxy(10,300,"Press any key to continue");
     getch();
   cleardevice();
   setcolor(YELLOW);
   outtextxy(0,50, "You are currently at");
   outtextxy(150,80,"Ground floor");
   setcolor(15);
   outtextxy(0,100, "Press 1 to go to 1st floor");
   outtextxy(0,150,"Press 2 to go to 2nd floor");
   outtextxy(0,200, "Press 3 to go to 3rd floor");
   outtextxy(0,250, "Press 4 to go to 4th floor");
   outtextxy(0,300, "Press 5 to go to 5th floor");
   outtextxy(0,350, "Press 0 to go to ground floor");
   outtextxy(0,380, "Press 999 to  exit");
     setcolor(YELLOW);
   outtextxy(10,400,"Press any key to enter");
   outtextxy(150,450,"the complex");


   getch();
   cleardevice();
  // choice1();
     setbkcolor(8);
 rectangle(50,340,98,390);//1
 // rectangle(50,240,98,280); //2
 //rectangle(50,400,98,450); //g
 // rectangle(50,150,98,200);///3
 // rectangle(50,80,98,120);//4
  floodfill(55,396,15);
// floodfill(55,245,15);
  ground_floor();
  first_floor();
  second_floor();
  third_floor();
  fourth_floor();
  fifth_floor();
 choice_from_g();
  //choice_from4();
// first_g();
// g_5();
     getch();
  closegraph();
//  printf("%d",x);
}
void choice1()
{
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(150,240,"Enter your choice");
   scanf("%d",&ch);
   getch();
   cleardevice();

}
void sound_lift()
{
   int a;
   for(a=3000;a<=4500;a=a+120)
   {
       sound(a);
       delay(30);
   }
   nosound();
}
void choice_from_g()
{


   scanf("%d",&ch);
 if(ch==5&&s=='G')
  {
  g_5();
  choice_from5();
  }
  if(ch==4&&s=='G')
  {
  g_4();
  choice_from4();
  }
  if(ch==3&&s=='G')
  {
  g_3();
  choice_from3();
  }
  if(ch==2&&s=='G')
  {
  g_2();
  choice_from2();
  }
  if(ch==1&&s=='G')
  {
  g_1();
  choice_from1();
  }
  if(ch==999)
  {
   cleardevice();
   setcolor(BLACK);
   //settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(150,240,"Thank u for using the lift");
   getch();
   exit(0);
  }
}
void choice_from4()
{

  scanf("%d",&ch);
 if(ch==5)
  {
  fourth_5();
  choice_from5();
  }
  if(ch==3)
  {
  fourth_3();
  choice_from3();
  }
  if(ch==2)
  {
  fourth_2();
  choice_from2();
  }
  if(ch==1)
  {
  fourth_1();
  choice_from1();
  }
  if(ch==0)
  {
  fourth_g();
  choice_from_g();
  }
  if(ch==999)
  {
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(0,240,"Thank u for using the lift");
   exit(0);
  }
}
void choice_from1()
{

  scanf("%d",&ch);
 if(ch==5)
  {
  first_5();
  choice_from5();
  }
  if(ch==3)
  {
  first_3();
  choice_from3();
  }
  if(ch==2)
  {
 first_2();
  choice_from2();
  }
  if(ch==4)
  {
  first_4();
  choice_from4();
  }
  if(ch==0)
  {
  first_g();
  choice_from_g();
  }
 if(ch==999)
  {
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(0,240,"Thank u for using the lift");
   exit(0);
  }
}
void choice_from3()
{

  scanf("%d",&ch);
 if(ch==5)
  {
  third_5();
  choice_from5();
  }
  if(ch==4)
  {
  third_4();
  choice_from4();
  }
  if(ch==2)
  {
  third_2();
  choice_from2();
  }
  if(ch==1)
  {
  third_1();
  choice_from1();
  }
  if(ch==0)
  {
  third_g();
  choice_from_g();
  }
  if(ch==999)
  {
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(0,240,"Thank u for using the lift");
   exit(0);
  }
}
void choice_from2()
{
 //setcolor(RED);
// outtextxy(200,3,"Enter your choice");
  scanf("%d",&ch);
 if(ch==5)
  {
  second_5();
  choice_from5();
  }
  if(ch==4)
  {
  second_4();
  choice_from4();
  }
  if(ch==3)
  {
  second_3();
  choice_from3();
  }
  if(ch==1)
  {
  second_1();
  choice_from1();
  }
  if(ch==0)
  {
  second_g();
  choice_from_g();
  }
  if(ch==999)
  {
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(0,240,"Thank u for using the lift");
   getch();
  }
}

void choice_from5()//incomplete down
{

  scanf("%d",&ch);
  if(ch==3)
  {
  fifth_3();
  choice_from3();
  }
  if(ch==2)
  {
  fifth_2();
  choice_from2();
  }

  if(ch==4)
  {
  fifth_4();
  choice_from4();
  }
  if(ch==1)
  {
  fifth_1();
  choice_from1();
  }
  if(ch==0)
  {
  fifth_g();
  choice_from_g();
  }
  if(ch==999)
  {
   setcolor(RED);
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
   outtextxy(0,240,"Thank u for using the lift");
   exit(0);
  }
}



void  up(int a,int b,int c,int f)
{

   int u,d;
   setcolor(RED);
   setviewport(0,0,100,460,1);
  for(u=a,d=b;u>=c,d>=f;u--,d--)
  {
 // signal_g();
  rectangle(50,d,98,u);
  delay(5);
 //signal_g();
   if(d==380)
  {
 outtextxy(20,380,"1");
 delay(300);
 }
 if(d==300)
 {
 outtextxy(20,300,"2");
 delay(300);
 }
 if(d==220)
 {
 outtextxy(20,190,"3");
 delay(300);
 }

 if(d==140)
 {
 outtextxy(20,110,"4");
 delay(300);
 }

 if(d==60||d==70)
 {
 outtextxy(20,60,"5");
 delay(300);
 }
 if((u>=c+20&&d!=220)&&(u>=c+20&&d!=60)&&(u>=c+20&&d!=70)&&(u>=c+20&&d!=140)&&(u>=c+20&&d!=300)&&(u>=c+20&&d!=380))
 clearviewport();
 }
 sound_lift();
 getch();
}



void  down(int p,int q,int r,int s)
{

   int u,d;
   setcolor(RED);
   setviewport(0,0,100,460,1);
  for(u=p,d=q;u<=r,d<=s;u++,d++)
  {
 // signal_g();
  rectangle(50,d,98,u);
  delay(5);
 //signal_g();
   if(u==325||u==320)//320
 {
 outtextxy(20,340,"1");
 delay(300);
 }
 if(u==245)// 240
 {
 outtextxy(20,260,"2");
 delay(300);
 }
 if(u==165)//220 160
 {
 outtextxy(20,190,"3");
 delay(300);
 }

 if(u==85)//80
 {
 outtextxy(20,110,"4");
 delay(300);
 }

 if(u==15)
 {
 outtextxy(20,60,"5");
 delay(300);
 }
 if(u==390)
 {
 outtextxy(20,430,"G");
 //u++;
 delay(300);
 }
 if((d<=s-20&&u!=390)&&(d<=s-20&&u!=160)&&(d<=s-20&&u!=60)&&(d<=s-20&&u!=15)&&(d<=s-20&&u!=80)&&(d<=s-20&&u!=240)&&(d<=s-20&&u!=320))
 clearviewport();
 }
 sound_lift();
 getch();
}









void g_1()
{

  up(399,449,310,370);
   getch();
}
void  g_5()
{

  up(399,449,5,60);
 getch();
}

void g_4()
{
  up(399,449,60,110);
  getch();
}
void g_3()
{
   up(399,449,150,200);
   getch();
}
void g_2()
{
   up(399,449,240,290);
   getch();
}






void first_2()
{
   up(339,389,240,290);
   getch();
}

void first_3()
{
   up(339,389,150,200);
   getch();
}

void first_4()
{
   up(339,389,80,130);
   getch();
}

void first_5()
{
   up(339,389,8,70);
   getch();
}

void second_3()
{
   up(240,280,160,220);
   getch();
}

void second_4()
{
   up(240,280,80,140);
   getch();
}
void second_5()
{
   up(240,280,10,60);
   getch();
}

void third_4()
{
  up(150,200,50,140);
  getch();
}
void third_5()
{
  up(150,200,10,60);
  getch();
}
void fourth_5()
{
  up(80,120,10,60);
  getch();
}

///////////////////////////////down
void fifth_g()
{
   down(10,60,400,450);
   getch();
}
void fifth_1()
{
   down(10,60,320,380);
   getch();
}
void fifth_2()
{
   down(10,60,240,300);
   getch();
}
void fifth_3()
{
   down(10,60,160,220);
   getch();
}
void fifth_4()
{
   down(10,60,80,140);
   getch();
}
void fourth_g()
{
   down(80,140,400,450);
   getch();
}
void fourth_1()
{
  down(80,120,320,380);
  getch();
}
void fourth_2()
{
  down(80,120,240,300);
  getch();
}
void fourth_3()
{
  down(80,120,160,220);
  getch();
}
void third_g()
{
  down(160,220,400,450);
  getch();
}
void third_1()
{
  down(160,220,320,380);
  getch();
}
void third_2()
{
  down(160,220,240,300);
  getch();
}
void second_g()
{
  down(240,300,400,450);
  getch();
}
void second_1()
{
  down(240,300,320,380);
  getch();
}
void first_g()
{
   down(320,380,400,450);
   getch();
}
void ground_floor()
{
  setcolor(0);
  line(150,390,580,390);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(363,420 , "GROUND FLOOR");
 // signal_g();
  //setcolor(RED);
 // outtextxy(580,420,"G");
}

void first_floor()
{
  setcolor(0);
  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(330,353 , "1ST FLOOR");
  //signal_1();
}

void second_floor()
{
  setcolor(0);
  line(150,310,580,310);

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(330,260 , "2ND FLOOR");
 // signal_2();
}

void third_floor()
{
  setcolor(0);
  line(150,230,580,230);

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(330,180 , "3RD FLOOR");
 //  setcolor(RED);
 //  outtextxy(580,180,"3");
 //signal_3();
 }

void fourth_floor()
{
  setcolor(0);
  line(150,150,580,150);

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
  outtextxy(330,110 , "4TH FLOOR");
 //  setcolor(RED);
 //  outtextxy(580,110,"4");
 //signal_4();
}

void fifth_floor()
{
  setcolor(0);
  line(150,70,580,70);

  settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
  settextjustify(CENTER_TEXT, CENTER_TEXT);
 outtextxy(330,60 , "5TH FLOOR");
 // setcolor(RED);
 //  outtextxy(580,40,"5");
 // signal_5();
}
