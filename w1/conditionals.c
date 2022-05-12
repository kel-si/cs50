#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int answer = get_int("What's your favorite number? ");

  if (answer < 9 )
  {
    printf("Your favorite number is less than mine.\n");
  }
  if (answer > 9 )
  {
    printf("Your favorite number is greater than mine.\n");
  }
  if (answer == 9 )
  {
    printf("We have the same favorite number!!\n");
  }
}