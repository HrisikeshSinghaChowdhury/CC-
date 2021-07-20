#include<dos.h.
#include<stdio.h>
void main()
{
    struct date curday;
    struct time curtime;
    getdate(&curday);
    gettime(&curtime);

    printf("\n Today's date is in dd/mm/yyyy format is :");
    printf("%d - %d - %d",curday.da_day,curday.da_mon,curday.da_year);


    printf("\n Current time is in hh/mm/ss format is :");
    printf("%d - %d - %d",curtime.ti_hour,curtime.ti_min,curtime.ti_sec);

}