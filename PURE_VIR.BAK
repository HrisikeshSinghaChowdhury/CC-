#include<iostream.h>
#include<conio.h>
class base
{
    public:
    virtual void display()=0;
};
class first:public base
{
    public:
    void display()
    {
	cout<<"First class"<<endl;
    }
};
class second:public base
{
    public:
    void display()
    {
	cout<<"Second class"<<endl;
    }
};
void main()
{
   clrscr();
   base *ptr[2];
   first ob1;
   second ob2;
   ptr[0]=&ob1;
   ptr[1]=&ob2;
   for(int i=0;i<2;i++)
   {
       ptr[i]->display();
   }
   getch();
}
/*****************OUTPUT******************
First class
Second class
******************************************/