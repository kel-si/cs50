#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
  float amount = get_float("Dollar amount: ");
  // use math library
  int pennies = round(amount * 100);
  printf("Pennies: %i\n", pennies);
}