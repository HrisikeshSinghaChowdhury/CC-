/**************To perform operations on array*****************/
#include<stdio.h>
#include<conio.h>

void main()
{
    /*Declaration of variables */
    int m[50],size,max,min,i;
    long int sum=0,sum2=0;
    float mean,variance,d;
    clrscr();
    printf("\n Enter the size of the array");//Input the size
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
	printf("\n Enter the number :");
	scanf("%d",&m[i]);//Input the number
	sum=sum+m[i];
    }
    printf("\n SUM = %d",sum);

    mean=sum/size;
    printf("\n MEAN = %4.2f",mean);
    max=m[0];
    min=m[0];
    for(i=0;i<size;i++)
    {
	d=m[i]-mean;
	d=d*d;
	sum2=sum2+d;
	if(min>m[i])
	    min=m[i];
	if(max<m[i])
	    max=m[i];

    }
    variance=sum2/size;
    printf("\n VARIANCE = %4.2f",variance);
    printf("\n MAXIMUM NUMBER =%d",max);
    printf("\n MINIMUM NUMBER =%d",min);


    getch();
}
/**************OUTPUT**********
***************1ST RUN*********

 Enter the size of the array :3

 Enter the number :14

 Enter the number :15

 Enter the number :8

 SUM = 37
 MEAN = 12.00
 VARIANCE = 9.00
 MAXIMUM NUMBER =15
 MINIMUM NUMBER =8

*****************************/
