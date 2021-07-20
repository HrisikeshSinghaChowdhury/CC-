#include<iostream.h>
#include<conio.h>
template <class t>
class insertion_sort
{
    t a[],size;
    public:
    void getdata();
    void sort();
    void display();
};
template <class t>
void insertion_sort<t> :: getdata()
    {
	 int i;
	 cout<<"Enter the size of the array"<<endl;
	 cin>>size;
	 for(i=1;i<=size;i++)
	 {
	     cout<<"Enter the number "<<endl;
	     cin>>a[i];
	 }
    }
template <class t>
void insertion_sort<t> :: sort()
{
    int i,j,c,d;
    float temp;
    for(i=1;i<=size;i++)
    {
	 temp=a[i];
	 j=i-1;
	 while(temp < a[j] && j>=1)
	 {
	      c=j+1;
	      a[c]=a[j];
	      j=j-1;
	 }
	 d=j+1;
	 a[d]=temp;
    }
}
template <class t>
void insertion_sort<t> :: display()
{
     int i=1;
     for(i=1;i<=size;i++)
	 cout<<a[i]<<",";
}
void main()
{
    clrscr();
    insertion_sort <float> s2;
    s2.getdata();
    s2.sort();
    s2.display();
    getch();
}