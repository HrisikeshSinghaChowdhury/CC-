#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class complex
{
    float real,imaginary;
    public:
    complex()
    {}
    complex(float r,float img)
    {
	real=r;
	imaginary=img;
    }
    void show()
    {
       if(imaginary > 0)
	  cout<<"Resultant complex number is "<<real<<"+"<<imaginary<<"i"<<endl;
       else
	  cout<<"Resultant complex number is "<<real<<"-"<<imaginary<<"i"<<endl;
    }
    complex operator +(complex ob1)
    {
	this->real=ob1.real + real;
	this->imaginary=ob1.imaginary + imaginary;
	return *this;
    }
      complex operator -(complex ob1)
    {
	this->real=ob1.real - real;
	this->imaginary=ob1.imaginary - imaginary;
	return *this;
    }
      complex operator *(complex ob1)
    {
	this->real=(ob1.real * real);
	this->imaginary=(ob1.imaginary *real)+(ob1,real * imaginary);
	return *this;
    }
};
void main()
{
    int choice;
    clrscr();
    complex c1,c2,c3;
    c1=complex(2.5,7.6);
    c2=complex(9.0,9.8);
    cout<<"Enter 1 to add two complex numbers"<<endl;
    cout<<"Enter 2 to subtract two complex numbers"<<endl;
    cout<<"Enter 3 to multiply two complex numbers"<<endl;
    cout<<"Enter 4 to exit"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
	 case 1:
	       c3=c1+c2;
	       break;
	 case 2:
	       c3=c1-c2;
	       break;
	 case 3:
	       c3=c1*c2;
	       break;
	 case 4:
	       return;
	 default:
	       return;
    }
    c3.show();
    getch();
}
/************************OUTPUT************
Enter 1 to add two complex numbers
Enter 2 to subtract two complex numbers
Enter 3 to multiply two complex numbers
Enter 4 to exit
Enter your choice
1
Resultant complex number is 11.5+17.4i
*******************************************
Enter 1 to add two complex numbers
Enter 2 to subtract two complex numbers
Enter 3 to multiply two complex numbers
Enter 4 to exit
Enter your choice
2
Resultant complex number is 6.5+2.2i

********************************************
Enter 1 to add two complex numbers
Enter 2 to subtract two complex numbers
Enter 3 to multiply two complex numbers
Enter 4 to exit
Enter your choice
3
Resultant complex number is 22.5+391.5i
********************************************/















