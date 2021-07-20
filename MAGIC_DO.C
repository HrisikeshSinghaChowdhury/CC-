#include<stdio.h>
#include<conio.h>
void main()
{
    int b=1,a,c[50],c2[50],m[50][50],z=0,n,x=0,y=3,num=1,k=0,i,j,r=0,p,t,temp;
    clrscr();
    printf("\n Enter the size(multiple of 4) :");
    scanf("\n %d",&n);
    printf("\n The magic matrix of order %d is ",n);
    printf("\n");
    c[0]=0;c2[0]=0;
    for(a=0;a<n;a++)
    {
	if(((a+1)%4)==0)
	{
	     c[b]=a;
	     c2[b]=a;
	     b++;
	     if((a+1)!=n)
	     {
	       c[b]=a+1;
	       c2[b]=a+1;
	       b++;
	     }
	}

    }








    while(num<=(n*n))
    {
    for(i=x;i<=y;i++)
    {
	k=0;

	for(j=0;j<n;j++)
	{
		if((i==r)&&(j==c2[k]))
		{
		    m[i][j]=num++;
		    k++;
		}
		else
		{
		   m[i][j]=(((n*n)-num)+1);
		   num++;
		}
	}
	r++;
	for(z=0;z<b;z++)
	{
	    if(z%2==0)
	    {

	       c[z]=c[z]+1;
	    }
	    else
	    {
	       c[z]=c[z]-1;

	    }
	    c2[z]=c[z];

	}
	for(p=0;p<b;p++)
	{
	     for(t=p+1;t<b;t++)
	     {
		  if(c2[t]<c2[p])
		  {
		      temp=c2[p];
		      c2[p]=c2[t];
		      c2[t]=temp;
		  }
	     }
	}


    }
    x=x+4;
    y=y+4;
    b=1;
    c[0]=0;c2[0]=0;
     for(a=0;a<n;a++)
    {
	if(((a+1)%4)==0)
	{
	     c[b]=a;
	     c2[b]=a;
	     b++;
	     if((a+1)!=n)
	     {
	       c[b]=a+1;
	       c2[b]=a+1;
	       b++;
	     }
	}

    }

    }


   for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
	   printf("  %3d ",m[i][j]);
       }
       printf("\n");
    }


    getch();
}