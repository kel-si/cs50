#include <cs50.h>
#include <stdio.h>

int main(void)
{
  // each character is stored in a byte of memory

  // "HI!" takes 4 bytes because there is a NUL (\0) at the end

  // NUL at the end of the string is to mark where a string ends
  string s = "HI!";
  string t = "BYE!"; // 5 bytes

  printf("%s\n", s);
  printf("%s\n", t);
}