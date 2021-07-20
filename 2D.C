#include<stdio.h>
#include<conio.h>
void main()
{
   int row,col,m[50][50],r,c,trace=0,i;
   clrscr();
   printf("\n enter the row size    :");
   scanf("%d",&row);
   printf("\n enter the column size :");
   scanf("%d",&col);

   for(r=0;r<row;r++)
   {
      for(c=0;c<col;c++)
      {
	 printf("\n enter the element :");
	 scanf("%d",&m[r][c]);
      }
   }
   printf("\n the matrix is \n");

   for(r=0;r<row;r++)
   {
      for(c=0;c<col;c++)
      {
	 printf("\t %3d",m[r][c]);
      }
   printf("\n");
   }
   if(row==col)
   {
       int size=row;
       for(i=0;i<size;i++)
	  trace+=m[i][i];
       printf("\n the trace of the matrix(main diagonal) is %d",trace);
       trace=0;
       for(r=0,c=size-1;(r<size)&&(c>=0);r++,c--)
	  trace+=m[r][c];
       printf("\n the trace of the matrix(other diagonal) is %d",trace);
   }
   else
      printf("\n the matrix is not a square matrix.So trace of the matrix is not possible.");


   getch();
}
