#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class shape
{
    public:
    double a,b;
    void getdata()
    {
       cout<<"Enter the first dimension"<<endl;
       cin>>a;
       cout<<"Enter the second dimension"<<endl;
       cin>>b;
    }
    virtual void display_area()=0;
};
class triangle:public shape
{
    public:
    double area;
    void display_area()
    {
	 area=0.5*a*b;
	 cout<<"Area of the triangle is  "<<area<<endl;
    }
};

class rectangle:public shape
{
    public:
    double area;
    void display_area()
    {
	 area=a*b;
	 cout<<"Area of the rectangle is  "<<area<<endl;
    }
};
void main()
{
    clrscr();
    shape *ptr[2];
    triangle ob1;
    rectangle ob2;
    ptr[0]=&ob1;
    ptr[1]=&ob2;
    int ch;
    cout<<"Press 1 to display area of a triangle "<<endl;
    cout<<"Press 2 to display area of a rectangle "<<endl;
    cout<<"Press 3 to exit"<<endl;
    cout<<"Enter your choice "<<endl;
    cin>>ch;
    switch(ch)
    {
	 case 1:
	 ob1.getdata();
	 ptr[ch-1]->display_area();
	 break;
	 case 2:
	 ob2.getdata();
	 ptr[ch-1]->display_area();
	 break;
	 default:
	 cout<<"Wrong choice"<<endl;
	 break;
    }
    getch();
}
/********************OUTPUT***************
Press 1 to display area of a triangle
Press 2 to display area of a rectangle
Press 3 to exit
Enter your choice
1
Enter the first dimension
9
Enter the second dimension
8
Area of the triangle is  36
******************************************
Press 1 to display area of a triangle
Press 2 to display area of a rectangle
Press 3 to exit
Enter your choice
2
Enter the first dimension
12
Enter the second dimension
8
Area of the rectangle is  96
****************************************/


