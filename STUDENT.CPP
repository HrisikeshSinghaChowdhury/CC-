#include<iostream.h>
#include<conio.h>
class student
{
	int admno;
	char name[20];
	float eng,math,sci;
	public:
	void takedata()
	{
		cout<<"Enter ADM no :";
		cin>>admno;
		cin.ignore();
		cout<<"Enter Name :";
		cin.getline(name,20);
		cout<<"Enter marks of ENG,MATH,SCI ";
		cin>>eng>>math>>sci;
	}
	void showdata()
	{
		cout<<"ADM NO :"<<admno<<endl;
		cout<<"NAME :"<<name<<endl;
		cout<<"ENG :"<<eng<<" MATH:"<<math<<" SCI :"<<sci<<endl;
	}
	float ctotal()
	{
		float tot;
		tot=eng+math+sci;
		return tot;
	}
};

void main()
{
	clrscr();
	student stud;
	stud.takedata();
	float sum=stud.ctotal();
	stud.showdata();
	cout<<"TOTAL MARKS :"<<sum<<endl;
	getch();
}
/****************OUTPUT*********************/
/*Enter ADM no :123
Enter Name :ARPAN CHAKRABORTY
Enter marks of ENG,MATH,SCI 89
90
91
ADM NO :123
NAME :ARPAN CHAKRABORTY
ENG :89 MATH:90 SCI :91
TOTAL MARKS :270

********************************************/
