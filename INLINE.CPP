#include<iostream.h>
#include<conio.h>
class integer
{
   int a,b;
   public:
   void getdata()
   {
      cout<<"Enter first integer number"<<endl;
      cin>>a;

      cout<<"Enter second integer number"<<endl;
      cin>>b;
   }
   inline int mul()
   {
      return(a*b);
   }
};
void main()
{
   clrscr();
   int result;
   integer ob1;
   ob1.getdata();
   result=ob1.mul();
   cout<<"Multiplication result = "<<result<<endl;
   getch();
}
/******************OUTPUT****************
Enter first integer number
12
Enter second integer number
34
Multiplication result = 408

*****************************************/