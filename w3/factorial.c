#include <stdio.h>

int fact(int n);

int main(void)
{
   int product = fact(5);

   printf("Factorial of 5 is: %i\n", product);
}

int fact(int n)
{
  if (n == 1)
      return 1;
  else
      return n * fact(n - 1);
}
