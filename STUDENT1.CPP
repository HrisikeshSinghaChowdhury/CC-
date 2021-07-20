#include<iostream.h>
#include<conio.h>

class student
{
	int admno;
	char name[31];
	float eng,ben,sci,x;
	public:
	void takedata()
	{
		cout<<"Enter ADM no :";
		cin>>admno;
		cin.ignore();
		cout<<"Enter Name :";
		cin.getline(name,31);
		cout<<"Enter ENG,BEN,SCI ";
		cin>>eng>>ben>>sci;
	}
	void showdata()
	{
		cout<<"ADM NO :"<<admno<<endl;
		cout<<"NAME :"<<name<<endl;
		cout<<"ENG :"<<eng<<" BEN :"<<ben<<" SCI :"<<sci<<endl;
		cout<<"TOTAL MARKS :"<<x<<endl;
	}
	float ctotal()
	{
		float tot;
		tot=eng+ben+sci;
		return tot;
	}
	student show()
	{
	   x=eng+ben+sci;
	   return *this;
	}
};

void main()
{
	student stud,stud1;
	stud.takedata();
	//float sum=stud.ctotal();
	stud1=stud.show();
	stud1.showdata();
	//cout<<"TOTAL MARKS :"<<sum<<endl;
	getch();
}