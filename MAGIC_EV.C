#include<stdio.h>
#include<conio.h>
static int m[50][50],n,num=1,x,y,p=1,row,col;
void main()
{
    int i,j,temp_row,temp_col,d=0,x1,x3,block,count=1,t,k,x4,c1,c2;
    clrscr();
    printf("\n ENTER THE SIZE OF THE SQUARE MATRIX  (ONLY EVEN) :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    m[i][j]=0;
	}
    }
    y=n/2;
    x=y;
    x3=x;
    x1=x;
    d=0;
    for(i=0;i<4;i++)
    {
       if(i==0)

	 {

	row=d;
	 p=1; col=y/2;

	   while(p<=(y*y))
	  {
	    //printf("\n %d, %d",row,col);
	    m[row][col]=num;
	    num++;
	    temp_col=(col+1)%x1; //x=n/2 x increases by n/2

	    if((row-1)>=d)
	    {
		 temp_row=row-1;
	    }
	    else
	    {
		 temp_row=x-1;
	    }
	    if(m[temp_row][temp_col]!=0)
	    {
		 row=(row+1)%x;
	    }
	    else
	    {
		 row=temp_row;
		 col=temp_col;
	    }
	    p++;

	}//end of while
	x=x+(n/2);
	d=d+(n/2);
    }
    if(i==1)
    {
	 x3=n/2;p=1;row=d;
	 for(k=3;k<(n/2-1);k++)
	     x3++;
	 if(n==14)
	     col=x3;
	 else
	     col=x3+1;

	 while(p<=(y*y))
	 {

	     m[row][col]=num;
	     num++;
	     if((col+1)==n)
		 temp_col=n/2;
	     else
		 temp_col=(col+1)%n; //x=n/2 x increases by n/2

	    if((row-1)>=d)
	    {
		 temp_row=row-1;
	    }
	    else
	    {
		 temp_row=n-1;
	    }
	    if(m[temp_row][temp_col]!=0)
	    {
		 row=(row+1)%n;
	    }
	    else
	    {
		 row=temp_row;
		 col=temp_col;

	    }
	    p++;

	}//end of while
     }
	if(i==2)
	{
	d=0;
	 x3=n/2;p=1;row=d;x4=n/2;

	 for(k=3;k<(n/2-1);k++)
	     x3++;
	 if(n==14)
	 col=x3;
	 else
	 col=x3+1;

	 while(p<=(y*y))
	 {

	     m[row][col]=num;
	     num++;
	     if((col+1)==n)
		 temp_col=n/2;
	     else
		 temp_col=(col+1)%n; //x=n/2 x increases by n/2

	    if((row-1)>=d)
	    {
		 temp_row=row-1;
	    }
	    else
	    {
		 temp_row=x4-1;
	    }
	    if(m[temp_row][temp_col]!=0)
	    {
		 row=(row+1)%n;
	    }
	    else
	    {
		 row=temp_row;
		 col=temp_col;

	    }
	    p++;
	   }

	}//end of while

	if(i==3)
	{
	 d=n/2;
	 p=1;row=d;
	     col=y/2;

	 while(p<=(y*y))
	 {
	    // printf("\n %d,%d",row,col);
	     m[row][col]=num;
	     num++;
	     temp_col=(col+1)%x1;  //x=n/2 x increases by n/2

	    if((row-1)>=d)
	    {
		 temp_row=row-1;
	    }
	    else
	    {
		 temp_row=n-1;
	    }
	    if(m[temp_row][temp_col]!=0)
	    {
		 row=(row+1)%n;
	    }
	    else
	    {
		 row=temp_row;
		 col=temp_col;

	    }
	    p++;

	}//en


      }

    }
   block=(n-2)/4;j=0;
   c1=1;
   c2=n-2;
    while(count<=block)
    {
    for(i=0;i<y;i++)
    {
	t=m[i][j];
	m[i][j]=m[i+y][j];
	m[i+y][j]=t;
	}
    count++;
    j++;
    }
      if(n!=6)
      {
	 if(n==10)
	  {
	      t=m[2][2];
	      m[2][2]=m[7][2];
	      m[7][2]=t;
	      t=m[2][1];
	      m[2][1]=m[7][1];
	      m[7][1]=t;
	  }
	  if(n==14)
	  {
	     t=m[3][2];
	     m[3][2]=m[10][2];
	     m[10][2]=t;
	     t=m[3][3];
	     m[3][3]=m[10][3];
	     m[10][3]=t;

	  }
	 count=1;j=n-1;
	 while(count<=block-1)
	 {
	 for(i=0;i<y;i++)
	{
	t=m[i][j];
	m[i][j]=m[i+y][j];
	m[i+y][j]=t;
	}
	count++;
	j--;
      }
     }























    printf("\n THE GENERATED MAGIC MATRIX OF SIZE %d IS AS FOLLOWS\n",n);
for(i=0;i<n;i++)
    {
	for(j=0;j<n;j++)
	{
	    printf("%3d  ",m[i][j]);
	}
	printf("\n");
    }
    getch();
}
