#include <stdio.h>

int collatz(int n);

int main(void)
{
  int steps = collatz(5);
  printf("The number of steps: %i\n", steps);
}

int collatz(int n)
{
    // base case
    if (n == 1)
    
        return 0;
    
    // even numbers
    else if ((n % 2) == 0)
     
        return 1 + collatz(n/2);

    // odd numbers 
    else
      
        return 1 + collatz(3 * n + 1);
}