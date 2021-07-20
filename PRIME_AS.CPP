#include<iostream.h>
#include<conio.h>
class prime
{
   public:
   int n;
   prime(int x)
   {
      n=x;
   }
   int check_prime(int j)
   {
     if ((n%j)==0)
	return 0;
     else
	return 1;
   }
};
void main()
{
   clrscr();
   int num;
   cout<<"Enter the number"<<endl;
   cin>>num;
   prime p(num);
   int fg=1;
   for(int i=2;i<num;i++)
   {
      fg=p.check_prime(i);
      if(fg==0)
	 break;
   }
   if(fg==1)
     cout<<num<<" is a Prime number"<<endl;
   else
     cout<<num<<" is not a prime number"<<endl;
   getch();
}
/********************OUTPUT**********
Enter the number
34
34 is not a prime number
*************************************
Enter the number
13
13 is a Prime number

*************************************/

