#include<stdio.h>
#include<conio.h>
void main()
{
    char sop[8][20]={"A'B'C'","A'B'C","A'BC'","A'BC","AB'C'","AB'C","ABC'","ABC"};
    char out[30]=" ";
    int m[10],i,j,n;
    clrscr();
    printf("\n Enter the number of SOP minterms  :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("\n Enter the minterm number(less than 8)  :");
	scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++)
    {
       for(j=0;j<8;j++)
       {
	    if(m[i]==j)
	    {
		strcat(out,sop[j]);
		if(i!=(n-1)&&(n>1))
		     strcat(out,"+");
	    }
       }
    }
    printf("\n The SOP equivalent is ");
    printf(": %s",out);
    getch();
}
