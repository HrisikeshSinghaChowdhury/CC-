#include<stdio.h>
#include<conio.h>
#include<string.h>
static int i3,i2,l,x2=0,x3=0,i=1;
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
	    swap((a+0),(a+i3));
	    print_anagram();
	}
	l2();
	i3++;
    }
}

void l2()
{
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
    }
    getch();
}
void print_anagram()
{
   if(i<=7)
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

