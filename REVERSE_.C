#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char ch[8],s[8];
    int i,len,j=0,k=0;
    clrscr();
    printf("\nEnter the sentence");
    gets(ch);
    strcat(ch," ");
    len=strlen(ch);
    printf("\n%d",len);
    strcpy(s," ");
    for(i=0;i<len-1;i++)
    {
	if(ch[i]==' ')
	{
	    puts(s);
	    strcpy(s," ");
	    j++;
	}
	else
	{
	    k++;
	    strcat(s,ch);
	}
    }
    printf("\n%d",j);
    printf("\n%d",k);
    getch();
}