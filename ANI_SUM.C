/*************A program to find the sum of the series********/
#include<stdio.h>
#include<conio.h>
int fact(int n) // returns the factorial of a number
{
   int i,f=1;
   for(i=1;i<=n;i++)
	f=f*i;
   return(f);
}
void main()
{
    /*Declaration of variables*/
    int x,factorial;
    long int sum=0;
    clrscr();
    for(x=1;x<=10;x++)
    {
	 factorial=fact(x);//function call
	 sum=sum+factorial;
    }
    printf("\n The sum of the series is : %ld",sum);

    getch();
}
/******************OUTPUT*****************

 The sum of the series is : -25319


*/