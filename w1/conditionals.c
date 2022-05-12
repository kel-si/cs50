#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // in C, const variables are often uppercase
  const int MYFAV = 9;

  int answer = get_int("What's your favorite number? ");

  if (answer < MYFAV )
  {
    printf("Your favorite number is less than mine.\n");
  }
  if (answer > MYFAV )
  {
    printf("Your favorite number is greater than mine.\n");
  }
 if (answer == MYFAV)
  {
    printf("We have the same favorite number!!\n");
  }
}