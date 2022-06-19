#include <cs50.h>
#include <stdio.h>

/*
exit status (integer)

main has the ability to signal to the user whether something was successful or not through the return value
*/

int main (int argc, string argv[])
{
  // program that requires a user to enter an argument

  if (argc != 2)
  {
    printf("Missing command-line argument\n");
    return 1; // return a nonzero value to exit
  }
  printf("Hello, %s\n", argv[1]);
  return 0; // by default main returns 0 for you and the system assumes all went well
}