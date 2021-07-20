#include<iostream.h>
#include<conio.h>
class employee
{
   private:
   int id;
   char name[31];
   protected:
   double basic;
   public:
   void getemp()
   {
      cout<<"Enter Employee ID"<<endl;
      cin>>id;
      cin.ignore();
      cout<<"Enter Name:";
      cin.getline(name,31);
      cout<<"Enter basic"<<endl;
      cin>>basic;
   }
   void showemp()
   {
      cout<<"Employee ID "<<id<<"Name: "<<name<<endl;
   }
};
class allowance_and_deduction:public employee
{
   private:
   double da,hra,gross,tax,pf,net;
   public:
   void setall()
   {
      da=(basic * 20)/100;
      hra=(basic*10)/100;
      gross=basic+da+hra;
      tax=(gross* 8)/100;
      pf=(gross * 5)/100;
      net=(gross - (tax+pf));
   }
   void payslip()
   {
     cout<<"Basic:"<<basic<<endl;
     cout<<"Gross:"<<gross<<endl;
     cout<<"PF:"<<pf<<endl;
     cout<<"Net salary:"<<net<<endl;
   }
};
void main()
{
   clrscr();
   allowance_and_deduction e;
   e.getemp();
   e.showemp();
   e.setall();
   e.payslip();
   getch();
}
/*******************OUTPUT******************
Enter Employee ID
123
Enter Name:AMIT SHAH
Enter basic
12340
Employee ID 123
Name: AMIT SHAH
Basic:12340
Gross:16042
PF:802.1
Net salary:13956.54

*****************************************/
