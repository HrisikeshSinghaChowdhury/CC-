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
   void sum(time,time);
};
void time :: sum(time t1,time t2)
{
   minutes = t1.minutes + t2.minutes;
   hours = minutes / 60;
   minutes = minutes % 60;
   hours =hours + t1.hours + t2.hours;
}
int main()
{
  time a,b,c;
  clrscr();
  a.settime(3,45);
  b.settime(5,13);
  c.sum(a,b);
  cout << " \nTime 1 = " ; a.showtime();
  cout << " \nTime 2 = " ; b.showtime();
  cout << " \nTime 3 = " ; c.showtime();
  getch();
  return 0;
}

