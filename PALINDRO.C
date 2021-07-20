#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
     int l2,x,i,n,j=0,b=0,z,y,l3;
     char s[10][30],s1[30],s3[30];

     clrscr();
     printf("\n Enter the number of names \n");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
	  printf("\n Enter the %d name  ",(i+1));
	  fflush(stdin);
	  gets(s[i]);
     }
     printf("\n WORDS \t\t NUMBER OF LETTERS \t\t REVERSE STRING\n");
    for(i=0;i<n;i++)
     {
	  l2=strlen(s[i]);
	  for(x=0;x<l2;x++)
	  {
	       if(s[i][x]==' ')
	       {
		   for(y=0;y<b;y++)
		      printf("%c",s3[y]);
		   printf("\t\t\t");
		   printf("%d\t\t\t",b);
		   for(y=b-1;y>=0;y--)
		      s1[j++]=s3[y];
		   for(y=0;y<j;y++)
		      printf("%c",s1[y]);
		   for(y=0;y<30;y++)
		      s1[y]=' ';
		   b=0;
		   printf("\n");

	       }
	       else
	       {
		   s3[b]=s[i][x];
		   b++;
	       }
	  }
     }
     getch();
}
