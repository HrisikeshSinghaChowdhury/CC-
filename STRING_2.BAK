#include<stdio.h>
#include<conio.h>
#include<string.h>
static  char w[20][30],s1[30]=" ",word[30],new[20][30],s3[2]="kk";

int number(char s[])
{
    int i,l,j=1,p,k=0,y=0;

    l=strlen(s);
    for(i=0;i<l;i++)
    {
	for(p=0;p<30;p++)
	    s1[p]=' ';
	k=0;
	while(s[i]!=' '&& s[i]!='\0'&&s[i]!='.')
	{
	    s1[k]=s[i];
	    i++;
	    k++;
	}
	s1[k]='\0';
	strcpy(w[y++],s1);
	puts(s1);
	j++;

    }
    return(j-1);
}
void main()
{
    int n,y,a=0,count=1,i,j,f[50];
    clrscr();
    printf("\n Enter the sentence \n");
    gets(word);

    printf("\n The words are as follows \n");
     n=number(word);
    printf("\n The number of words are %d ",n);


  for(i=0;i<n;i++)
  {
      if((strcmp(w[i],s3))!=0)
      {
	 
	   strcpy(new[a],w[i]);
	   for(j=i+1;j<n;j++)
	   {

	      if((strcmp(w[i],w[j]))==0)
	      {
		   strcpy(w[j],s3);
		   count++;
	      }
	   }

	  f[a]=count;
	  a++;
	  count=1;
     }
  }
   printf("\n Words \t\t Frequency\n");
   for(i=0;i<a;i++)
  {
     printf("\n%s  =\t\t  %d",new[i],f[i]);
  }



    getch();
}
