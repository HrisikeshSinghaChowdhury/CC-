#include<stdio.h>
#include<conio.h>
#include<string.h>
static int i4,i3,i2,l,x2=0,x3=0,x4=0,i=1,c=0;
static char a[10],temp[10];
void l4();
void l3();
void l2();
void print_anagram();
void reinitialise();
void swap(char *x,char *y)
{
    char temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void l4()
{

    while(i4<=l-1)
    {
       if(i4!=0)
       {
	   if(x4>0)
	   {
		reinitialise();
		i3=1;x3++;
	   }
	   swap((a+0),(a+(i4)));
	   print_anagram();
       }
       if(c==0)
       i3=0;
       else
       i3=1;
       c++;
      l3();

      i4++;

    }
}

void l3()
{
    while(i3<=l-1)
    {
	if(i3!=0)
	{
	    if(x3>0)
	    {
		 reinitialise();
	    }
	    if(x4==0)
	    swap((a+0),(a+i3));
	    else
	    swap((a+1),(a+i3));
	    print_anagram();
	}
	l2();
	i3++;
    }
}

void l2()
{
    if(x4>0)
    swap((a+2),(a+(l-1)));
    else
     swap((a+1),(a+(l-1)));
    print_anagram();

}
void main()
{
    clrscr();

    printf("\n Enter the word   :");
    gets(a);
    strcpy(temp,a);
    l=strlen(a);
    printf("\n the anagram of the word %s are\n",a);
    print_anagram();
    switch(l)
    {
	 case 2:
	 {
	     l2();x2++;i2=0;
	     break;
	 }
	 case 3:
	 {
	     x3++;i3=0;
	     l3();
	     break;
	 }
	 case 4:
	 {
	     x4++;i4=0;i2=2;l4();
	     break;
	 }
    }
    getch();
}
void print_anagram()
{
   if(i<=6)
   {
	printf(" %s",a);
	printf("  ");
	i++;
   }
   else
   {
       printf("\n");
       i=1;
   }
}
void reinitialise()
{
     strcpy(a,temp);
}

