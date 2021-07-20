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
			fl3.open("SAMPLE3.TXT",ios::out);
			while((ch=cin.get())!=EOF)
				fl3.put(ch);
			fl3.close();
		}
		void display()
		{
			int c;
			cout<<"Content of the file in reverse order:"<<endl;
			fl3.open("SAMPLE3.TXT",ios::in);
			fl3.seekg(0,ios::end);
			c=fl3.tellg();
			while(c>=1)
			{
				fl3.seekg(-1,ios::cur);
				ch=fl3.get();
				cout<<ch;
				fl3.seekg(-1,ios::cur);
				c--;

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