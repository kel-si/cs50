//string s = "Hi!"
//string s is an alias for char *s (in C, a string is really an array of characters - there is no string data type).

#include <stdio.h>

int main(void)
{
  char *s = "Hi!";
  printf("%s\n", s);
}
