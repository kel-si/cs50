#include <cs50.h>
#include <stdio.h>

float discount(float price);

int main(void)
{
  float regular = get_float("Regular Price: ");
  float sale = discount(regular);
  //2 decimal places
  printf("Sale Price: %.2f\n", sale);
}

//function called discount that returns a float and takes in a price
float discount(float price)
{
  return price * 0.85;
}