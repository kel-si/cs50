#include <cs50.h>
#include <stdio.h>

/** works for sums up to around 3 billion **/
int main(void)
{
  int x = get_int("x: ");
  int y = get_int("y: ");

  printf("%i\n", x + y);
}