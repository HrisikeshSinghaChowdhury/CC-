#include<iostream.h>
#include<conio.h>

class date
{
   private:
	    int d,m,y;

   public:
	    void getdata();
	    void display();
	    void adddate(int x);
	    int isvalid();
};
void date::getdata()
{
    cout <<"\n enter the date month year (dd mm yy):";
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
   switch(d)
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
	      if(d<1||d>28)
		 flag=1;
	    }

   if(d<1||d>31)
    flag=1;
   return(flag);

}
void date::adddate(int x)
{
  d=d+x;
  switch(m)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:if(d>31)
	     {
	       m++;
	       d=d-31;
	     }
	     if(m>12)//month
	     {
	      y++;
	      m=m-12;
	     }
	     break;
     case 4:
     case 6:
     case 9:
     case 11:if(d>30)
	     {
	       m++;
	       d=d-30;
	     }
	     break;
   }
     if(y%4==0)
	    {
	      if(d==29)
	      {
		d=29;
	      }
	      else  if(d>29)
	      {
		m++;
	       d=d-29;
	      }
	      else  if(d>28)
	      {
	       d=d+28;
	      }
	      if(m>12)
	      {
		y++;
		m=m-12;
	      }
	    }
	    else
	    {

	      if(d>28)
	      {
	       m++;
	       d=d-28;
	      }
	      if(m>12)
	      {
		y++;
		m=m-12;
	      }


	    }
}




int main()
{
  clrscr();
  date dt;
  dt.getdata();
  if(dt.isvalid()==0)
  {
      cout <<"\n given ";
      dt.display();
      cout <<"\nenter the  days to add:";
      int day;
      cin >>day;
      dt.adddate(day);
      cout <<"\n after addition";
      dt.display();
  }
  else
      cout << "\n invalid date given";

 getch();
 return(0);
}