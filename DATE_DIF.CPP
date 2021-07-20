#include<iostream.h>
#include<conio.h>

class date
{
   public:
	    int d,m,y;

   public:
	    void getdata();
	    void display();
	    int diffdate(date ob);
	    int isvalid();
};
void date::getdata()
{
       cin >> d >> m >> y;
}
void date::display()
{
   cout <<"\n date::" <<d <<"/" <<m <<"/" <<y;
}

int date::isvalid()
{
   int flag=0;
   if(m>12)
   {
     flag=1;
     return(flag);
   }
   switch(m)
   {
     case 1:
     case 3:
     case 5:
     case 7:
     case 8:
     case 10:
     case 12: if(d<1||d>31)
		flag=1;

	      break;
     case 4:
     case 6:
     case 9:
     case 11:if(d<1||d>30)
		flag=1;

	       break;
   }
     if(y%4==0)
	    {
	       if(d<1||d>29)
		  flag=1;
	     }
	    else
	    {
	      if((d<1||d>28)&&(m==2))
		 //cout<<"thank you ";
		 flag=1;

	    }
   return(flag);

}
int date::diffdate(date ob)
{
  int x=0,d1,m1,y1;
  d1=this->d;
  m1=this->m;
  y1=this->y;
  while(d1!=ob.d||m1!=ob.m)
  {
  x++;
  d1=d1+1;
  //m[c++]=d1;
  switch(m1)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:if(d1>31)
	     {
	       m1=m1+1;
	       d1=d1-31;
	     }
	     if(m1>12)//month
	     {
	      y1++;
	      m1=m1-12;
	     }
	     break;
     case 4:
     case 6:
     case 9:
     case 11:if(d1>30)
	     {
	       m1++;
	       d1=d1-30;
	     }
	     break;
     case 2:if(y1%4==0)
	    {
	      if(d1==29)
	      {
		d1=29;
	      }
	      else  if(d1>29)
	      {
		m1++;
		d1=d1-29;
	      }
	    }
	    else
	    {

	      if(d1>28)
	      {
	       m1++;
	       d1=d1-28;
	      }
	    }
	      break;
   }}

 return x;
 }




int main()
{
  clrscr();
  date dt,dt2,dt3,dt4;
  int diff1,diff_year,year,a,b;
  cout <<"\n enter the date month year(starting date) (dd mm yy):";
  dt.getdata();
  cout <<"\n enter the date month year(ending date)(dd mm yy):";
  dt2.getdata();
  year=dt2.y;
  if((dt.isvalid()==0)&&(dt2.isvalid()==0))
  {
      cout <<"\n given ";
      dt.display();
      dt2.display();
      diff_year=dt2.y-dt.y;
      if(diff_year==0)
      {
       diff1=dt.diffdate(dt2);
      }
      else if(diff_year==1)
      {
      dt3.d=31;
      dt3.m=12;
      dt3.y=dt.y;
      diff1=dt.diffdate(dt3);
      dt3.d=1;dt3.m=1;dt3.y=year;
      diff1=diff1+(dt3.diffdate(dt2));
      }
      else
      {
      dt3.d=31;dt3.m=12;dt3.y=dt.y;
      diff1=dt.diffdate(dt3);
      a=dt.y;
      a=a+1;
      b=dt2.y;
      while(a<b)
      {
      if(a%4==0)
      diff1=diff1+366;
      else
      diff1=diff1+365;
      a++;
      }
      dt4.d=1;
      dt4.m=1;
      dt4.y=b;
      diff1=diff1+(dt4.diffdate(dt2));
      }
      cout <<"\nDifference between the two days =";
      cout<<diff1<<" days";
  }
  else
      cout << "\n invalid date given";
 getch();
 return(0);
}