#include<iostream.h>
#include<conio.h>
class second;
class first
{
   double l;
   double b;
   public:
   void get_length()
   {
      cout<<"Enter the length of the cuboid"<<endl;
      cin>>l;
   }
   void get_breadth()
   {
      cout<<"Enter the breadth of the cuboid"<<endl;
      cin>>b;
   }
   friend double volume_of_cuboid(first ob1, second ob2);
};
class second
{
   double h;
   public:
   void get_height()
   {
      cout<<"Enter the height of the cuboid"<<endl;
      cin>>h;
   }
   friend double volume_of_cuboid(first ob1,second ob2);
};
double volume_of_cuboid(first ob1,second ob2)
{
   double v;
   v=ob1.l*ob1.b*ob2.h;
   return v;
}
void main()
{
   clrscr();
   first f1;
   second s1;
   double result;
   f1.get_length();
   f1.get_breadth();
   s1.get_height();
   result=volume_of_cuboid(f1,s1);
   cout<<"Volume of the cuboid is "<<result;
   getch();
}
/****************OUTPUT*****************
Enter the length of the cuboid
12
Enter the breadth of the cuboid
4
Enter the height of the cuboid
6
Volume of the cuboid is 288


*************************************/
