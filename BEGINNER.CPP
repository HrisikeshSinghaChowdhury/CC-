#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class person
{
   char name[30];
   int age;
   public:
   void getdata();
   void display();
};
void person :: getdata()
{
   cout << " Enter name :"<< endl;
   cin.getline(name,30);
   cout << " Enter age  :"<< endl;
   cin >> age;
}
void person :: display()
{
   cout << "\n\t\t" << name << "\t\t" << age;
}
const int n=3;
int main()
{
   clrscr();
   //cout << "\n Enter the number of students  :";
  // cin  >> n;
   person p[n];
   for(int i=1;i<=n;i++)
   {
    p[i].getdata();
   }
   cout << "\n\t\tName" << "\tAge";
   for(i=1;i<=n;i++)
   {
    p[i].display();
   }
   getch();
   return 0;
}