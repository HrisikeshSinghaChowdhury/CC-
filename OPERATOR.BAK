#include<iostream.h>
#include<conio.h>
class string
{
   char ch[31];
   public:
   void get_string()
   {
       cout<<"Enter the string"<<endl;
       cin.getline(ch,31);
   }
   int operator ==(string ob)
   {
       for(int i=0;ch[i]!='\0'||ob.ch[i]!='\0';i++)
       {
	   if(ch[i] != ob.ch[i])
		return(ch[i]-ob.ch[i]);
       }
       return(ch[i]-ob.ch[i]);
   }
};
void main()
{
   clrscr();
   string s1,s2;
   s1.get_string();
   s2.get_string();
   int x=(s1==s2);
   if(x==0)
   {
       cout<<"Same string "<<endl;
   }
   else
   {
       cout<<"Different string"<<endl;
   }
   getch();
}
/*****************OUTPUT***************
Enter the string
We are learning C++.
Enter the string
We are learning UNIX.
Different string
****************************************
Enter the string
computer science
Enter the string
computer science
Same string
***************************************/
