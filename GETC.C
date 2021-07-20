#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[10][30];
    int i,n;
    clrscr();
    printf("\n enter the number of sentences");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("\n Enter the sentences :");
       fflush(stdin);
       gets(ch[i]);
    }
    for(i=0;i<n;i++)
    {
       puts(ch[i]);
       printf("\n");
    }
    getch();
}