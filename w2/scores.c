#include <stdio.h>
#include <cs50.h>

int main(void)
{
  // a better way to store these scores would be to use an array.

  // int score1 = 72;
  // int score2 = 73;
  // int score3 = 33;

  // declaring an array with 3 integers
  int scores[3];

  // loop through to assign scores to the array
  for (int i = 0; i < 3; i++)
  {
    scores[i] = get_int("SCORE: ");
  }

  //could set integers like this (no need to declare type here):
    // scores[0] = (73);
    // scores[1] = (72);
    // scores[2] = (33);
    
  // user input to get the scores
    // scores[0] = get_int("Score 1: ");
    // scores[1] = get_int("Score 2: ");
    // scores[2] = get_int("Score 3: ");

  // get error: "format specifies type 'double' but the argument has type 'int' [-Wformat]"
  // need to convert to float - we can change 3 to 3.0
  // printf("Average: %f\n", (score1 + score2 + score3) / 3);

  printf("Average: %f\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}