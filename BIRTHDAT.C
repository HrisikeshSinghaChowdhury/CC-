#include<stdio.h>
#include<conio.h>

void main()
{
    int day1[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int day2[]={31,29,31,30,31,30,31,31,30,31,30,31};//for leap year
    int m[]={0,1,2,3,4,5,6,7,8,9,10,11};
    int year,today_year,day_output=0,today_day,today_month,k,i,week,day,input_day,input_month,input_year;
     clrscr();

     printf("\n Enter today's date in numbers: ");
     printf("\n Enter day :");
     scanf("%d",&today_day);
     printf("\n Enter month :");
     scanf("%d",&today_month);
     printf("\n Enter year :");
     scanf("%d",&today_year);

     printf("\n Enter your birthdate in numbers: ");
     printf("\n Enter day :");
     scanf("%d",&input_day);
     printf("\n Enter month :");
     scanf("%d",&input_month);
     printf("\n Enter year :");
     scanf("%d",&input_year);

     today_month=today_month-1;
     input_month=input_month-1;

     year=today_year-input_year;

     for(i=0;i<12;i++)
     {
	 if(input_month==m[i])
	      k=i;
     }


     day_output=day1[k]-input_day;

	 year=year-1;
	 if(today_year%4!=0)
	 {
	      for(i=k+1;i<12;i++)
		   day_output=day_output+day1[i];
	      if(today_year%4!=0)
	      {
		  for(i=0;i<today_month;i++)
		      day_output=day_output+day1[i];
	      }
	  }
	  if(today_year%4==0)
	  {
	      for(i=k+1;i<12;i++)
		   day_output=day_output+day2[i];
	      if(today_year%4==0)
	      {
		  for(i=0;i<today_month;i++)
		      day_output=day_output+day2[i];
	      }
	  }
	   day_output=day_output+today_day;



     if(day_output>=365)
     {
	  day_output=day_output-365;
	  year=year+1;
     }
     week=day_output/7;
     day=day_output%7;
     printf("\n Your present age is :");
     printf("\n %d year %d weeks %d days",year,week,day);

     getch();
}




