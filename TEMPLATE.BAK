#include<iostream.h>
#include<conio.h>
template <class T>
T min(T *m,int size)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
	for(j=i+1;j<size;j++)
	{
	    if(m[i]>m[j])
	    {
		temp=m[i];
		m[i]=m[j];
		m[j]=temp;
	    }
	}
    }
    return m[0];
}
int min(int * ,int  );
float min(float * ,int );
void main()
{
   int  s,arri[10],i,i_min;
   float arrf[10],f_min;
   clrscr();
   cout<<"\nEnter the size of the array .Maximum range is 10."<<endl;
   cin>>s;
   cout<<"\nFirst enter the integer numbers"<<endl;
   for(i=0;i<s;i++)
   {
       cout<<"Enter the number"<<endl;
       cin>>arri[i];
   }

   i_min=min(arri,s);
   cout<<"\nThe minimum value contained in the integer array is "<<i_min<<endl;
   cout<<"\nNow enter the  floating point numbers"<<endl;
   for(i=0;i<s;i++)
   {
       cout<<"Enter the number"<<endl;
       cin>>arrf[i];
   }

   f_min=min(arrf,s);
   cout<<"\nThe minimum value contained in the floating point array is "<<f_min<<endl;
   getch();

}
/**********************OUTPUT******************

First enter the integer numbers
Enter the number
23
Enter the number
45
Enter the number
22
Enter the number
89

The minimum value contained in the integer array is 22

Now enter the  floating point numbers
Enter the number
12.9
Enter the number
78.9
Enter the number
45.0
Enter the number
-9.8

The minimum value contained in the floating point array is -9.8

*******************************************/