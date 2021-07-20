#include<stdio.h>
#include<conio.h>
#include<string.h>
static int dh[22]={4,4,5,6,6,7,8,8,9,10,10,12,13,14,15,16,17,18,19,20,21,22};
static int dm[22]={7,57,42,5,42,52,23,48,50,28,55,5,15,12,26,5,17,6,5,40,32,21};
static int ah[22]={4,5,6,6,7,8,9,9,10,11,11,12,13,14,16,16,18,18,19,21,22,23};
static int am[22]={50,44,25,52,25,35,7,31,32,10,38,48,57,57,10,45,2,49,50,30,15,7};
static int dtsh[22]={5,5,6,7,7,8,9,9,10,11,12,13,14,15,16,17,18,19,22,22,23,23};
static int dtsm[22]={0,52,35,2,40,44,15,50,46,25,6,10,20,40,25,6,30,15,32,55,4,40};
static int atsh[22]={5,6,7,7,8,9,10,10,11,12,12,14,15,16,17,17,19,19,23,23,23,0};
static int atsm[22]={45,35,18,46,27,28,0,35,37,10,50,5,5,30,7,50,15,58,20,40,50,25};
static int ch,j=0,x=0,cm,fare=5,dtrh[22],dtrm[22],m[22],h[22],h2[22],m2[22],bhth[22],bhtm[22],h3[22],m3[22],rh[22],rm[22],bgh[22],bgm[22],hb[22],mb[22],dkh[22],dkm[22],ddh[22],ddm[22],brh[22],brm[22],a,b,start,end;//current time current minute
static char station1[30],station2[30];
void choice_from_dankuni();
void dankuni_to_sealdah();
void dankuni_to_rajchandrapur();









void choice_from_sealdah();
void sealdah_to_bidhan_nagar_road();
void sealdah_to_dumdum();
void sealdah_to_baranagar_road();
void sealdah_to_dakhineswar();
void sealdah_to_ballyghat();
void sealdah_to_ballyhalt();
void sealdah_to_rajchandrapur();
void sealdah_to_dankuni();
//bd=Bidhan nagar road
void choice_from_bidhan_nagar_road();
void bd_to_dumdum();
void bd_to_baranagar_road();
void bd_to_dakhineswar();
void bd_to_ballyghat();
void bd_to_ballyhalt();
void bd_to_rajchandrapur();
void bd_to_dankuni();
//dd=dumdum ddh
void choice_from_dumdum();
void dd_to_baranagar_road();
void dd_to_dakhineswar();
void dd_to_ballyghat();
void dd_to_ballyhalt();
void dd_to_rajchandrapur();
void dd_to_dankuni();
//br=baranagar road brh
void choice_from_baranagar_road();
void br_to_dakhineswar();
void br_to_ballyghat();
void br_to_ballyhalt();
void br_to_rajchandrapur();
void br_to_dankuni();
//dk=dakhineswar dkh
void choice_from_dakhineswar();
void dk_to_ballyghat();
void dk_to_ballyhalt();
void dk_to_rajchandrapur();
void dk_to_dankuni();
//bg=ballyghat bgh bgm
void choice_from_ballyghat();
void bg_to_ballyhalt();
void bg_to_rajchandrapur();
void bg_to_dankuni();
//bht=ballyhalt
void choice_from_ballyhalt();
void bht_to_rajchandrapur();
void bht_to_dankuni();
//rh rm
void rajchandrapur_to_dankuni();
void main()
{


    clrscr();
    printf("\n********WELCOME TO THE DANKUNI (ONLY UP)SECTION OF EASTERN RAILWAY****");
    printf("\n Enter the station name from where you want to start your journey ");
    gets(station1);

    if(strcmp(station1,"dankuni")==0)
    {
	choice_from_dankuni();
    }

    if(strcmp(station1,"sealdah")==0)
    {
	choice_from_sealdah();
    }
    if(strcmp(station1,"bidhan nagar road")==0)
    {
       choice_from_bidhan_nagar_road();
    }

    if(strcmp(station1,"dumdum")==0)
    {
       choice_from_dumdum();
    }

    if(strcmp(station1,"baranagar road")==0)
    {
       choice_from_baranagar_road();
    }

    if(strcmp(station1,"dakhineswar")==0)
    {
       choice_from_dakhineswar();

    }

    if(strcmp(station1,"ballyghat")==0)
    {
       choice_from_ballyghat();
       fare=5;

    }

    if(strcmp(station1,"bally halt")==0)
    {
       choice_from_ballyhalt();
       fare=5;

    }
    if(strcmp(station1,"rajchandrapur")==0)
    {
       rajchandrapur_to_dankuni();
       fare=5;

    }
    printf("\n Fare is Rs %d",fare);
    printf("\n Eastern Railway wishes you a happy and safe journey");
    getch();
}

void choice_from_dankuni()
{
   long int no=32212;
   int i;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);

   if(strcmp(station2,"sealdah")==0)
   {
      fare=10;
      dankuni_to_sealdah();
   }
   /*
   if(strcmp(station2,"bidhan nagar road")==0)
   {
      fare=5;
      sealdah_to_bidhan_nagar_road();

   }
   if(strcmp(station2,"dumdum")==0)
   {
      fare=5;
      sealdah_to_dumdum();

   }
    if(strcmp(station2,"baranagar road")==0)
   {
      fare=5;
      sealdah_to_baranagar_road();

   }
    if(strcmp(station2,"dakhineswar")==0)
   {
      fare=5;
      sealdah_to_dakhineswar();

   }
     if(strcmp(station2,"ballyghat")==0)
   {
      fare=5;
      sealdah_to_ballyghat();

   }
   if(strcmp(station2,"bally halt")==0)
   {

      sealdah_to_ballyhalt();
      fare=10;
   }
   */

    if(strcmp(station2,"rajchandrapur")==0)
   {

      dankuni_to_rajchandrapur();
      fare=5;
   }



}
void dankuni_to_rajchandrapur()
{
   long int no=32212;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dtsh[i];
      tm=dtsm[i]+30;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      rh[i]=th;
      rm[i]=tm;
   }
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL RAJCHANDRAPUR  %d:%d \t%s \t %d:%d",no,rh[i],rm[i],station2,ah[i],am[i]);
   }
    printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==rh[i])
	 {
	     if(cm<=rm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",rh[i],rm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==rh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",rh[i+j],rm[i+j]);
		   break;
	       }
	   }
     }
}

void dankuni_to_sealdah()
{
   int i;
   long int no=32212;
   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t DANKUNI_SEAlDAH LOCAL DANKUNI  %d:%d \t%s \t %d:%d",no,dtsh[i],dtsm[i],station2,atsh[i],atsm[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dtsh[i])
	 {
	     if(cm<=dtsm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dtsh[i],dtsm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dtsh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dtsh[i+j],dtsm[i+j]);
		   break;
	       }
	   }
     }
}
void rajchandrapur_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+30;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      rh[i]=th;
      rm[i]=tm;
   }
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL RAJCHANDRAPUR  %d:%d \t%s \t %d:%d",no,rh[i],rm[i],station2,ah[i],am[i]);
   }
    printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==rh[i])
	 {
	     if(cm<=rm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",rh[i],rm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==rh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",rh[i+j],rm[i+j]);
		   break;
	       }
	   }
     }
}

void choice_from_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+27;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      bhth[i]=th;
      bhtm[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
      fare=10;
      bht_to_dankuni();
   }
    if(strcmp(station2,"rajchandrapur")==0)
   {

      bht_to_rajchandrapur();
      fare=10;
   }



}

void bht_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=bhth[i];
      tm=bhtm[i]+3;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      rh[i]=th;
      rm[i]=tm;
   }
   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BALLY HALT  %d:%d \t%s \t %d:%d",no,bhth[i],bhtm[i],station2,rh[i],rm[i]);
      no=no+2;
   }
    printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==bhth[i])
	 {
	     if(cm<=bhtm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",bhth[i],bhtm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==bhth[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",bhth[i+j],bhtm[i+j]);
		   break;
	       }
	   }
     }
}

void bht_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=bhth[i];
      tm=bhtm[i]+16;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      rh[i]=th;
      rm[i]=tm;
   }
   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {

      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BALLY HALT  %d:%d \t%s \t %d:%d",no,bhth[i],bhtm[i],station2,rh[i],rm[i]);
      no=no+2;
   }
    printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==bhth[i])
	 {
	     if(cm<=bhtm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",bhth[i],bhtm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==bhth[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",bhth[i+j],bhtm[i+j]);
		   break;
	       }
	   }
     }
}

void choice_from_sealdah()
{
   long int no=32213;
   int i;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);

   if(strcmp(station2,"dankuni")==0)
   {
      fare=10;
      sealdah_to_dankuni();
   }
   if(strcmp(station2,"bidhan nagar road")==0)
   {
      fare=5;
      sealdah_to_bidhan_nagar_road();

   }
   if(strcmp(station2,"dumdum")==0)
   {
      fare=5;
      sealdah_to_dumdum();

   }
    if(strcmp(station2,"baranagar road")==0)
   {
      fare=5;
      sealdah_to_baranagar_road();

   }
    if(strcmp(station2,"dakhineswar")==0)
   {
      fare=5;
      sealdah_to_dakhineswar();

   }
     if(strcmp(station2,"ballyghat")==0)
   {
      fare=5;
      sealdah_to_ballyghat();

   }
   if(strcmp(station2,"bally halt")==0)
   {

      sealdah_to_ballyhalt();
      fare=10;
   }


    if(strcmp(station2,"rajchandrapur")==0)
   {

      sealdah_to_rajchandrapur();
      fare=10;
   }



}
void choice_from_bidhan_nagar_road()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+8;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      hb[i]=th;
      mb[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
       bd_to_dankuni();
   }
   if(strcmp(station2,"dumdum")==0)
   {

      bd_to_dumdum();

   }
   if(strcmp(station2,"baranagar road")==0)
   {

      bd_to_baranagar_road();

   }
    if(strcmp(station2,"dakhineswar")==0)
   {

      bd_to_dakhineswar();

   }
     if(strcmp(station2,"ballyghat")==0)
   {

      bd_to_ballyghat();

   }
    if(strcmp(station2,"bally halt")==0)
   {

      bd_to_ballyhalt();

   }
    if(strcmp(station2,"rajchandrapur")==0)
   {

      bd_to_rajchandrapur();

   }
}
void choice_from_dumdum()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+13;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      ddh[i]=th;
      ddm[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
       dd_to_dankuni();
   }
   if(strcmp(station2,"baranagar road")==0)
   {

      dd_to_baranagar_road();

   }
    if(strcmp(station2,"dakhineswar")==0)
   {

      dd_to_dakhineswar();

   }
     if(strcmp(station2,"ballyghat")==0)
   {

      dd_to_ballyghat();

   }
   if(strcmp(station2,"bally halt")==0)
   {

      dd_to_ballyhalt();

   }
    if(strcmp(station2,"rajchandrapur")==0)
   {

      dd_to_rajchandrapur();

   }
}
void choice_from_baranagar_road()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+18;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      brh[i]=th;
      brm[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
      br_to_dankuni();
   }
    if(strcmp(station2,"dakhineswar")==0)
   {

      br_to_dakhineswar();

   }
     if(strcmp(station2,"ballyghat")==0)
   {

      br_to_ballyghat();

   }

   if(strcmp(station2,"bally halt")==0)
   {
      br_to_ballyhalt();
   }
    if(strcmp(station2,"rajchandrapur")==0)
   {

      br_to_rajchandrapur();

   }
}

void choice_from_dakhineswar()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+21;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      dkh[i]=th;
      dkm[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
      dk_to_dankuni();
   }

     if(strcmp(station2,"ballyghat")==0)
   {

      dk_to_ballyghat();

   }

   if(strcmp(station2,"bally halt")==0)
   {
      dk_to_ballyhalt();
   }
    if(strcmp(station2,"rajchandrapur")==0)
   {

      dk_to_rajchandrapur();

   }
}
void choice_from_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   printf("\n Enter the station name where you want to end your journey ");
   gets(station2);
    for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+25;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      bgh[i]=th;
      bgm[i]=tm;
   }

   if(strcmp(station2,"dankuni")==0)
   {
      bg_to_dankuni();
   }

   if(strcmp(station2,"bally halt")==0)
   {
      bg_to_ballyhalt();
   }

    if(strcmp(station2,"rajchandrapur")==0)
   {

      bg_to_rajchandrapur();

   }

}


void bg_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=bgh[i];
      tm=bgm[i]+2;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
       printf("\n %ld \t SEALDAH-DANKUNI LOCAL BALLYGHAT  %d:%d %s \t %d:%d",no,bgh[i],bgm[i],station2,h[i],m[i]);
       no=no+2;
   }
     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==bgh[i])
	 {
	     if(cm<=bgm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",bgh[i],bgm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==bgh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",bgh[i+j],bgm[i+j]);
		   break;
	       }
	   }
     }
}
void bg_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=bgh[i];
      tm=bgm[i]+5;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BALLYGHAT  %d:%d %s \t %d:%d",no,bgh[i],bgm[i],station2,h[i],m[i]);
      no=no+2;
   }
     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==bgh[i])
	 {
	     if(cm<=bgm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",bgh[i],bgm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==bgh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",bgh[i+j],bgm[i+j]);
		   break;
	       }
	   }
     }
}

void bg_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=bgh[i];
      tm=bgm[i]+18;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BALLYGHAT  %d:%d %s \t %d:%d",no,bgh[i],bgm[i],station2,h[i],m[i]);
   }
     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==bgh[i])
	 {
	     if(cm<=bgm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",bgh[i],bgm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==bgh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",bgh[i+j],bgm[i+j]);
		   break;
	       }
	   }
     }
}
void dk_to_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dkh[i];
      tm=dkm[i]+4;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DAKHINESWAR  %d:%d \t%s \t %d:%d",no,dkh[i],dkm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dkh[i])
	 {
	     if(cm<=dkm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dkh[i],dkm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dkh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dkh[i+j],dkm[i+j]);
		   break;
	       }
	   }
     }
}
void dk_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dkh[i];
      tm=dkm[i]+6;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DAKHINESWAR  %d:%d \t%s \t %d:%d",no,dkh[i],dkm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dkh[i])
	 {
	     if(cm<=dkm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dkh[i],dkm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dkh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dkh[i+j],dkm[i+j]);
		   break;
	       }
	   }
     }
}

void dk_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dkh[i];
      tm=dkm[i]+9;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DAKHINESWAR  %d:%d \t%s \t %d:%d",no,dkh[i],dkm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dkh[i])
	 {
	     if(cm<=dkm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dkh[i],dkm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dkh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dkh[i+j],dkm[i+j]);
		   break;
	       }
	   }
     }
}
void dk_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dkh[i];
      tm=dkm[i]+22;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DAKHINESWAR  %d:%d \t%s \t %d:%d",no,dkh[i],dkm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dkh[i])
	 {
	     if(cm<=dkm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dkh[i],dkm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dkh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dkh[i+j],dkm[i+j]);
		   break;
	       }
	   }
     }
}


void sealdah_to_bidhan_nagar_road()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+8;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}
 void sealdah_to_dumdum()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+13;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}
void sealdah_to_baranagar_road()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+18;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}


void sealdah_to_dakhineswar()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+21;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}

void sealdah_to_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+25;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}
void sealdah_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+27;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}
void sealdah_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+30;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}
void sealdah_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=dh[i];
      tm=dm[i]+43;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL SEALDAH  %d:%d \t%s \t %d:%d",no,dh[i],dm[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==dh[i])
	 {
	     if(cm<=dm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",dh[i],dm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==dh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",dh[i+j],dm[i+j]);
		   break;
	       }
	   }
     }
}

void bd_to_dumdum()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+5;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}
void bd_to_baranagar_road()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+10;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}
void bd_to_dakhineswar()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+13;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}
void bd_to_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+17;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}
void bd_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+19;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}

void bd_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+22;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}
void bd_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=hb[i];
      tm=mb[i]+35;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BIDHANNAGAR ROAD  %d:%d \t%s \t %d:%d",no,hb[i],mb[i],station2,h[i],m[i]);
      no=no+2;
   }

   printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==hb[i])
	 {
	     if(cm<=mb[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",hb[i],mb[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==hb[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",hb[i+j],mb[i+j]);
		   break;
	       }
	   }
     }
}

void dd_to_baranagar_road()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+5;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}

void dd_to_dakhineswar()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+8;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
       printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
       no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}

void dd_to_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+12;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}

void dd_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+14;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
      no=no+2;
   }


     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}



void dd_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+17;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}

void dd_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=ddh[i];
      tm=ddm[i]+30;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL DUM DUM %d:%d \t%s \t %d:%d",no,ddh[i],ddm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==ddh[i])
	 {
	     if(cm<=ddm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",ddh[i],ddm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==ddh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",ddh[i+j],ddm[i+j]);
		   break;
	       }
	   }
     }
}


void br_to_dakhineswar()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=brh[i];
      tm=brm[i]+3;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BARANAGAR ROAD %d:%d \t%s \t %d:%d",no,brh[i],brm[i],station2,h[i],m[i]);
     no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==brh[i])
	 {
	     if(cm<=brm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",brh[i],brm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==brh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",brh[i+j],brm[i+j]);
		   break;
	       }
	   }
     }
}

void br_to_ballyghat()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=brh[i];
      tm=brm[i]+7;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BARANAGAR ROAD %d:%d \t%s \t %d:%d",no,brh[i],brm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==brh[i])
	 {
	     if(cm<=brm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",brh[i],brm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==brh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",brh[i+j],brm[i+j]);
		   break;
	       }
	   }
     }
}

void br_to_ballyhalt()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=brh[i];
      tm=brm[i]+9;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BARANAGAR ROAD %d:%d \t%s \t %d:%d",no,brh[i],brm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==brh[i])
	 {
	     if(cm<=brm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",brh[i],brm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==brh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",brh[i+j],brm[i+j]);
		   break;
	       }
	   }
     }
}

void br_to_rajchandrapur()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=brh[i];
      tm=brm[i]+12;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BARANAGAR ROAD %d:%d \t%s \t %d:%d",no,brh[i],brm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==brh[i])
	 {
	     if(cm<=brm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",brh[i],brm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==brh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",brh[i+j],brm[i+j]);
		   break;
	       }
	   }
     }
}

void br_to_dankuni()
{
   long int no=32213;
   int i,th,tm;
   for(i=0;i<=21;i++)
   {
      th=brh[i];
      tm=brm[i]+25;
      if(tm>=60)
      {
	  th=th+1;
	  tm=tm-60;
      }

      h[i]=th;
      m[i]=tm;
   }

   printf("\n NO. \tNAME \t\t\t FROM \t\t DEP \t TO \t ARR");
   for(i=0;i<=21;i++)
   {
      printf("\n %ld \t SEALDAH-DANKUNI LOCAL BARANAGAR ROAD %d:%d \t%s \t %d:%d",no,brh[i],brm[i],station2,h[i],m[i]);
      no=no+2;
   }

     printf("\n Enter the current time(hour)");
    scanf("%d",&ch);
    printf("\n Enter the current time(minute)");
    scanf("%d",&cm);
    j=0;
    for(i=0;i<=21;i++)
    {
	 if(ch==brh[i])
	 {
	     if(cm<=brm[i])
	     {
	      printf("\n Next train is at %3d:%3d hours ",brh[i],brm[i]);
	      x++;
	      break;
	      }
	     j++;
	 }
     }
     if(x==0)
     {
	   for(i=0;i<=21;i++)
	   {
	       if(ch==brh[i])
	       {
		  printf("\n Next train is at %3d:%3d hours ",brh[i+j],brm[i+j]);
		   break;
	       }
	   }
     }
}
