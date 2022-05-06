#include <cs50.h>
#include <stdio.h>

/** works with larger numbers (64 bits) but still limited **/
int main(void)
{
  long x = get_long("x: ");
  long y = get_long("y: ");

  printf("%li\n", x + y);
}