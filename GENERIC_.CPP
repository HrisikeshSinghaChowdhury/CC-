#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
template <class T>
class vector
{
	T *v;
	public:
	vector(int n)
	{
		v=new T[n];
		size=n;
	}
	void input();
	void display();
	void scalar_mul(T);
	void update();
};

	void vector::input()
	{
		cout<<"\nEnter elements "<<endl;
		for(int i=1;i<=size;i++)
		{
			cout<<"\n Element "<<i<<":\t";
			cin>>v[i];
		}
	}
	void vector::display()
	{
		char c;
		cout<<"\nA=";
		for(int i=1;i<size;i++)
		{
			c=104+i;
			cout<<"( "<<v[i]<<c<<" )"<<" + ";
		}
		c=104+size;
		cout<<" ( "<<v[size]<<c<<")"<<endl;
	}
	template<class T>
	void vector::scalar_mul(T n)
	{
		for(int i=1;i<=size;i++)
		v[i]=v[i]*n;
	}
	template<class T>
	void vector::update()
	{
		T a,b;
		int i=1,flag=0;
		cout<<"\nEnter the value to be updated:\t";
		cin>>a;
		while(i<=size && flag==0)
		{
			if(v[i]==a)
			{
				cout<<"\nEnter the new value :\t";
				cin>>b;
				cout<<"\n\n---------Before Updation -------------\n\n";
				display();
				flag=1;
				break;
			}
			else
			i++;
		}
		if(flag==0)
		cout<<"\nElement not present"<<endl;
	}
	void main()
	{
		int n,ch;
		clrscr();
		do
		{
			cout<<"\n ------------MAIN MENU-----------\t";
			cout<<"\n 1. Vector of Integer type.\n Vector of float type.\nExit\n";
			cout<<"\nEnter choice:\t";
			cin>>ch;
			switch(ch)
			case 1:
			{
				int m;
				cout<<"\nEnter number of elements :\t";
				cin>>n;
				vector <int>v(n);
				v.input();
				v.display();
				v.update();
				do
				{
					cout<<"\nEnter a scalar number:\t";
					cin>>m;
				}while(m==0);
				cout<<"\n\n-------------Before scalar multiplication --------\n\n";
				v.display();
				v.scalar_mul(m);
				cout<<"\n\n-------------After scalar multiplication --------\n\n";
				v.display();
			break:
			case 2:
				float m;
				cout<<"\nEnter number of elements :\t";
				cin>>n;
				vector <float>v1(n);
				v1.input();
				v1.display();
				v1.update();
				do
				{
					cout<<"\nEnter a scalar number:\t";
					cin>>m;
				}while(m==0.0);
				cout<<"\n\n-------------Before scalar multiplication --------\n\n";
				v1.display();
				v1.scalar_mul(m);
				cout<<"\n\n-------------After scalar multiplication --------\n\n";
				v1.display();
			break;
			case 3:
				exit(0);
			break;
			default:
				cout<<"\n Wrong choice"<<endl;
			break;
		}while (ch!=3);
	getch();
       }