#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class employee
{
   public:
   int id;
   static int status;
   char name[31];
   static double max;
   double sal;
   public:
   void getdata()
   {
      cout<<"Enter the id"<<endl;
      cin>>id;
      cin.ignore();
      cout<<"Enter name"<<endl;
      cin.getline(name,31);
      cout<<"Enter salary"<<endl;
      cin>>sal;
   }
   void process(int j)
   {
     if(sal>=max)
     {
	max=sal;
	status=j;
     }
   }
   static int assign()
   {
      return(status);
   }
   void showdata()
   {
      cout<<id<<"\t\t"<<name<<"\t\t\t"<<sal<<endl;
   }

};
double employee::max=0;
int employee::status=0;
void main()
{
   int i,ans;
   clrscr();
   employee e[3];
   for(i=0;i<5;i++)
   {
      e[i].getdata();
      e[i].process(i);
   }
   cout<<"ID\t\t"<<"NAME\t\t\t"<<"SALARY"<<endl;
   for(i=0;i<5;i++)
   {
     e[i].showdata();
   }
   ans=employee::assign();
   cout<<"The employee details with the maximum salary"<<endl;
   cout<<"\n\n";
   cout<<"ID\t\t"<<"NAME\t\t\t"<<"SALARY"<<endl;
   for(i=0;i<5;i++)
   {
      if(i==ans)
      {
	   e[i].showdata();
      }
   }
   getch();
}

