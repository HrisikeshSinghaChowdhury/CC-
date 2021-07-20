#include<iostream.h>
#include<conio.h>
class factorial
{

   int a,fact;
   public:
   void process();
   void display();
   factorial(int x)
   {
       a=x;
       fact=1;
   }
   factorial(factorial &ob)
   {
       fact=ob.fact;
       a=ob.a;
   }};
   void factorial::process()
   {
       for(int i=1;i<=a;i++)
       {
	    fact=fact*i;
       }
   }

   void factorial::display()
   {
      cout<<"The factorial is" <<fact<<endl;
   }

void main()
{
   int num;
   clrscr();
   cout<<"Enter the number"<<endl;
   cin>>num;
   factorial f1(num);
   factorial f2(f1);
   f2.process();
   f2.display();
   getch();
}
/******************OUTPUT************
Enter the number
7
The factorial is5040

************************************/