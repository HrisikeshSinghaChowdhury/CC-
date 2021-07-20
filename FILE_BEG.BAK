#include<stdio.h>
#include<conio.h>
#include<fstream.h>
class myfile
{
	fstream fl3;
	char ch;
	public:
		void create()
		{
			cout<<"Enter something for File :";
			fl3.open("SAMPLE2.TXT",ios::out);
			while((ch=cin.get())!=EOF)
				fl3.put(ch);
			fl3.close();
		}
		void display()
		{
			cout<<"Content of the file :"<<endl;
			fl3.open("SAMPLE2.TXT",ios::in);
			while((ch=fl3.get())!=EOF)
			{
				cout<<ch;
			}
			fl3.close();
		}
};

void main()
{
	clrscr();
	myfile ob;
	ob.create();
	ob.display();
	getch();
}
/*********************OUTPUT********************
Enter something for File :HELLO WE ARE STUDYING C++.
WE ARE STUDENTS OF BSc 3RD YEAR OF BANGABASI COLLEGE.

Content of the file :
HELLO WE ARE STUDYING C++.
WE ARE STUDENTS OF BSc 3RD YEAR OF BANGABASI COLLEGE.
****************************************************/

