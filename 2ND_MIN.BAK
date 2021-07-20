#include<iostream.h>
#include<conio.h>
class number
{
   public :
   int num[30],size;
   void getdata();
   void find_second_min();
   void display();
};
void number :: getdata()
{
   int i;
   cout << "enter the size of the array :" ;
   cin  >> size;
   for ( i=0;i<size;i++)
   {
       cout << "enter the number :" ;
       cin  >> num[i];
   }

}
void number :: find_second_min()
{
   int i,j,temp;
   for (i=0;i<(size-1);i++)
   {
      for(j=i+1;j<size;j++)
      {
	  if(num[i]>num[j])
	  {
	     temp = num[i];
	     num[i] = num[j];
	     num[j] = temp;
	  }
      }
   }
}
void number :: display()
{

   cout << "The second smallest element is  :" << num[1];
}
void main()
{
   number p;
   clrscr();
   p.getdata();
   p.find_second_min();
   p.display();
   getch();
}
/******************OUTPUT*****************
enter the size of the array :4
enter the number :23
enter the number :45
enter the number :-9
enter the number :0
The second smallest element is  :0

****************************************/