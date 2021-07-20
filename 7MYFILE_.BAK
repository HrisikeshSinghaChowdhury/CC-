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
			fl1.open("SAMPLE2.TXT",ios::out);
			while((ch=cin.get())!=EOF)
				fl1.put(ch);
			fl1.close();
		}
		void replace()
		{
			int flag=1;
			fl1.open("SAMPLE2.TXT",ios::in);
			fl2.open("TEST2.TXT",ios::out);
			while((ch=fl1.get())!=EOF)
			{
				if(ch==' '&& flag==1)
				{
					ch=' ';
					flag=0;
					fl2.put(ch);
				}
				else
				{
					 if(ch!=' ')
					 {
					      fl2.put(ch);
					      flag=1;
					 }
					 else
					      flag=0;
				}
			}
			fl1.close();
			fl2.close();
		}
		void display()
		{
			cout<<"Content of the Target file :"<<endl;
			fl1.open("TEST2.TXT",ios::in);
			while((ch=fl1.get())!=EOF)
			{
				cout<<ch;
			}
			fl1.close();
		}
};
void main()
{
	clrscr();
	myfile ob;
	ob.create();
	ob.replace();
	ob.display();
	getch();
}