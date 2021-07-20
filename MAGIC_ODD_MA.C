#include<stdio.h>
#include<conio.h>
void main()
{
    int n,m[50][50],row,row2,col,col2,i,j,num=1,block,c=1,x1=3,x2=7,r1=0,r2=4;
    clrscr();
    printf("\n ENTER THE SIZE OF THE SQUARE MATRIX  (ONLY ODD) :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    m[i][j]=0;
	}
    }
    if(n%2!=0)
    {
	row =0;col=n/2;
	num=1;
	while(num<=n*n)
	{
	    m[row][col]=num;
	    num++;
	    col2=(col+1)%n;
	    if((row-1)>=0)
	    {
		 row2=row-1;
	    }
	    else
	    {
		 row2=n-1;
	    }
	    if(m[row2][col2]!=0)
	    {
		 row=(row+1)%n;
	    }
	    else
	    {
		 row=row2;
		 col=col2;
	    }
	}
    }
    printf("\n THE GENERATED MAGIC MATRIX OF SIZE %d IS AS FOLLOWS\n",n);
  for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("%d\t",m[i][j]);
	}
	printf("\n");
    }
    getch();
}
