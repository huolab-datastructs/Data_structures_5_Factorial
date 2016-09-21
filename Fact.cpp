#include "fact.h" 
int factorial(int n)
/*
Pre:  n is a nonnegative integer.
Post: Return the value of the factorial of n.
*/
{
   if (n == 0)
      return 1;
   else
      return n * factorial(n - 1);
}