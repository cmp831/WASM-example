//Fibonacci Series using Recursion
#include<stdio.h>
long long fib(long long n)
{
   if (n <= 1)
      return n;
   return fib(n-1) + fib(n-2);
}
 
int main ()
{
  long long n = 40;
  printf("%lld", fib(n));
  return 0;
}