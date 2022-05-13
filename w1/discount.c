#include <cs50.h>
#include <stdio.h>

float discount(float price, int percentage);

int main(void)
{
  float regular = get_float("Regular Price: ");
  int percent_off = get_int("Percent Off: ");
  float sale = discount(regular, percent_off);
  //2 decimal places
  printf("Sale Price: %.2f\n", sale);
}

//function called discount that returns a float and takes in a price and discount
float discount(float price, int percentage)
{
  return price * (100 - percentage) / 100;
}