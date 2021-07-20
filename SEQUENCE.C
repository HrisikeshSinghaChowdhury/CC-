#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
   int m[10],diff[10],fvalue=0,temp[10],flag=1,count=0,cr,no=0,x=4,n=5,i,a,b,c,next,A,B,C,D,k=0;
   float a2,b2,c2,next2,D2=-2.00;
   clrscr();
   printf("\n Enter the first five terms of the sequence");
   for(i=0;i<n;i++)
   {
	printf("\n Enter the %dth term ",(i+1));
	scanf("%d",&m[i]);
	temp[i]=m[i];
   }
   if(m[0]==1&&m[1]==4&&m[2]==9&&m[3]==16&&m[4]==25)//square of n
   {
      next=36;
      printf("\n Possible next term is %d",next);
      getch();
      exit(0);
   }
   if(m[0]==1&&m[1]==4&&m[2]==27&&m[3]==256)//n to the power n
   {
      next=6;
      for(i=1;i<=6;i++)
      {
	 next=next*6;
      }
      printf("\n Possible next term is %d",next);
      getch();
      exit(0);
   }
  if(((m[2]%m[1])==0)&&((m[4]%m[3]==0)))//gp series
   {
      cr=m[2]/m[1];
      next=m[0]*(pow(cr,5));
      printf("\n Possible next term is %d",next);
      getch();
      exit(0);
   }
   flag=1;
   no=0;
   x=4;
   while(flag==1)
   {
       k=0;count=0;no++;
       for(i=1;i<=x;i++)
       diff[k++]=temp[i]-temp[i-1];
       a=diff[0];
       for(i=0;i<x;i++)
       {
	  // printf("\n%d\t",diff[i]);
	   if(a==diff[i])
	       count++;
       }
      // printf("\n");
       if(count==x)
       {
	   flag=0;
	   break;
       }
       else
       {
	   for(i=0;i<x;i++)
	      temp[i]=diff[i];
	   x--;
	   flag=1;
       }
   }
   for(i=0;i<=x;i++);
   {
      if(diff[i]%2!=0)
	fvalue++;
   }
  // printf("\n%d",no);
    A=m[0];B=m[1];C=m[2];D=-2;
   if(no==1)
   {
      a=B-A;
      b=2*A-B;
      //printf("\na=%d",a);
     //printf("\nb=%d",b);
      next=a*6+b;
      printf("\n Possible next term is %d",next);
   }
   if(no==2)
   {
      if(fvalue>0)
      {
	 a2=(2*B-C-A)/D2;
	 b2=(5*A-8*B+3*C)/D2;
	 c2=(-2*C+6*B-6*A)/D2;

	 next2=a2*6.00*6.00+b2*6.00+c2;
	 printf("\n Possible next term is %2.0f",next2);
      }
      if(fvalue==0)
      {
	 a=(2*B-C-A)/D;
	 b=(5*A-8*B+3*C)/D;
	 c=(-2*C+6*B-6*A)/D;
	 next=a*6*6+b*6+c;
	 printf("\n Possible next term is %d",next);
      }
   }

   getch();
}