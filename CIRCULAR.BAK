#include<stdio.h>
#include<conio.h>
void main()
{
    int n,num=1,col1,row1,col2=0,row2=0,m[50][50],i,j;
    clrscr();
    printf("\n Enter the size of the square matrix  :");
    scanf("%d",&n);
    col1=n-1;row1=n-1;
    while(num<=(n*n))
    {
    for(j=col2;j<=col1;j++)
	 m[row2][j]=num++;
    row2++;
    for(i=row2;i<=row1;i++)
	 m[i][col1]=num++;
    col1--;
    for(j=col1;j>=col2;j--)
	 m[row1][j]=num++;
    row1--;
    for(i=row1;i>=row2;i--)
	 m[i][col2]=num++;
    col2++;
    }
    printf("\n The circular matrix is \n");
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
