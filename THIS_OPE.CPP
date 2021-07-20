#include<iostream.h>
#include<conio.h>
class time
{
   int hours;
   int minutes;
   public :
   void settime(int h,int m)
   {
      hours=h;
      minutes=m;
   }
   void showtime()
   {
     cout << hours << " hours and " << minutes << "minutes " << endl;
   }
   time sum(time t1,time t2)
   {
     this->minutes = t1.minutes + t2.minutes;
     this->hours = this->minutes / 60;
     this->minutes = this->minutes % 60;
     this->hours =this->hours + t1.hours + t2.hours;
     return *this;
   }
};
int main()
{
  time t1,t2,t3,t4;
  clrscr();
  t1.settime(3,45);
  t2.settime(5,13);
  t4=t3.sum(t1,t2);
  cout << " \nTime 1 = " ; t1.showtime();
  cout << " \nTime 2 = " ; t2.showtime();
  cout << " \nTime 3 = " ; t4.showtime();
  getch();
  return 0;
}
/*******************OUTPUT*****************

Time 1 = 3 hours and 45minutes

Time 2 = 5 hours and 13minutes

Time 3 = 8 hours and 58minutes

*******************************************/

