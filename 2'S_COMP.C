#include<stdio.h>
#include<conio.h>
static char ch[50];
static long int m[50],l,num=0,j=1,sum=0,sum2=0,temp,rem,y=1;
static int c=0;
void print();
void two_complement();
void one_complement()
{
    int i;
    for(i=0;i<l;i++)
    {
	if(m[i]==0)
	{
	     m[i]=1;
	}
	else
	{
	     m[i]=0;
	}
    }
    two_complement();

}
void two_complement()
{
     int i=l-1;
     do
     {
	 c++;
     }
     while(m[c]!=1);
     while(i>=c-1)
     {
	num=num+(j*m[i]);
	j=j*10;
	i--;
     }
     printf("\nThe 1's complement of %s is \t\t= %ld",ch,num);
    // printf("\n                            \t\t\t+  1");
     printf("\n                            \t\t --------");
     temp=num;
      while(temp>0)//Binary to decimal
      {
	  rem=temp%10L;
	  sum=sum+(i*rem);
	  temp=temp/10L;
	  i=i*2;
      }
	 sum=sum*-1;
	 sum++;
       temp=sum;
       sum2=0;rem=0;
       while(temp>0) //Decimal to binary
       {
	    rem=temp%2;
	    sum2=sum2+(y*rem);
	    temp=temp/2;
	    y=y*10;
       }
       printf("\nThe 2's complement of %s is \t\t =%ld",ch,sum2);

}
void main()
{
    int i;
    clrscr();
    printf("\n Enter the binary number");
    gets(ch);
    l=strlen(ch);
    for(i=0;i<l;i++)
    {
	m[i]=ch[i]-'0';
    }
    printf("\n");
    one_complement();
    getch();
}