int isPrime(int n)           //Function definition
{
   int i,s=sqrt(n);
   if(n<=1)
      return(0);             //Returns 0 if the number is less than 0
   if( (n==2) || (n==3))
      return(1);             //Returns 1 if the number is 2 or 3
   if( (n%2)==0)
      return(0);            //Returns 0 if the number is even except 2
   for(i=3;i<=s;i=i+2)
      {
      if( (n%i)==0)
  return(0);           //Returns 0 if the number is divisible by        the odd numbers less than it
      }
    return(1);  //Returns 1 if the above conditions is not  satisfied
}
/****End of function definition**************************************/


