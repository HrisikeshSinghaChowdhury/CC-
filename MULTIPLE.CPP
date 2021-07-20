#include<iostream.h>
#include<conio.h>
class student
{
    protected:
    char name[31];
    int age,roll,c;
    public :
    void enter_details()
    {
       cout<<"Enter the name of the student"<<endl;
       cin.getline(name,31);
       cout<<"Enter the class"<<endl;
       cin>>c;
       cout<<"Enter the roll number"<<endl;
       cin>>roll;
    }
};
class subject
{
   protected:
   int math,phy,chem;
   public:
   void enter_marks()
   {
      cout<<"Enter the marks in Math"<<endl;
      cin>>math;
      cout<<"Enter the marks in Phy"<<endl;
      cin>>phy;
      cout<<"Enter the marks in chem"<<endl;
      cin>>chem;
   }
};
class marksheet:public student,public subject
{
   private:
   int total;
   double per;
   public:
   void setdata()
   {
      total=math+phy+chem;
      per=(total/3);
   }
   void generate_marksheet()
   {
      cout<<"************MARKSHEET**************"<<endl;
      cout<<"\n\n";
      cout<<"\nNAME :"<<name;
      cout<<"\nCLASS :"<<c;
      cout<<"\nROLL :"<<roll;
      cout<<"\nTOTAL :"<<total;
      cout<<"\nPERCENTAGE :"<<per<<"%";
   }
};
void main()
{
   clrscr();
   marksheet s;
   s.enter_details();
   s.enter_marks();
   s.setdata();
   s.generate_marksheet();
   getch();
}
/**************OUTPUT******************
Enter the name of the student
RISHAV BISWAS
Enter the class
11
Enter the roll number
32
Enter the marks in Math
90
Enter the marks in Phy
67
Enter the marks in chem
90
************MARKSHEET**************



NAME :RISHAV BISWAS
CLASS :11
ROLL :32
TOTAL :247
PERCENTAGE :82%

***********************************/


