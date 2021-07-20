

#include<dos.h>
 
main()
{
   int a;
 
   for ( a = 1 ; a <=60 ; a = a + 20 )
   {
      sound(a);
      delay(25);
   }
   nosound();
 
}