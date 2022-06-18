#include <stdio.h>

int main(void)
{
  int score1 = 72;
  int score2 = 73;
  int score3 = 33;

  // get error: "format specifies type 'double' but the argument has type 'int' [-Wformat]"
  // need to convert to float - we can change 3 to 3.0
  // printf("Average: %f\n", (score1 + score2 + score3) / 3);

  printf("Average: %f\n", (score1 + score2 + score3) / 3.0);
}