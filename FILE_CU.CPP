#include<stdio.h>
#include<conio.h>
#include<fstream.h>
class myfile
{
	fstream fl1,fl2;
	char ch;
	public:
		void create()
		{
			cout<<"Enter something for File :";
			fl1.open("SAMPLE.TXT",ios::out|ios::app);
			while((ch=cin.get())!=EOF)
				fl1.put(ch);
			fl1.close();
		}
		void replace()
		{
			fl1.open("SAMPLE.TXT",ios::in);
			fl2.open("TEST.TXT",ios::out);
			while((ch=fl1.get())!=EOF)
			{
				if(ch==' ')
					ch='*';
				fl2.put(ch);
			}
			fl1.close();
			fl2.close();
		}
		void display()
		{
			cout<<"Content of the Target file :"<<endl;
			fl1.open("TEST.TXT",ios::in);
			while((ch=fl1.get())!=EOF)
			{
				cout<<ch;
			}
			fl1.close();
		}
};

void main()
{
	myfile ob;
	ob.create();
	ob.replace();
	ob.display();
	getch();
}
/****************OUTPUT*****************
Enter something for File :We are studying C++.

Content of the Target file :
We*are*studying*C++.
****************************************/


