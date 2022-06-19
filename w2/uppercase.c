#include <cs50.h>
#include <stdio.h>
#include <string.h>

// takes an input and returns input with uppercase letters

int main (void)
{
  string s = get_string("Before: ");
  printf("After: ");

  for (int i = 0, n = strlen(s); i < n; i++)
  {
      // checking if current letter is lowercase by checking ASCII value
      if (s[i] >= 'a' && s[i] <= 'z')
      {
          // In ASCII there is a difference of 32 between an uppercase and lowercase letter (ex: 'A' is 65 and 'a' is 97, 'B' is 66 and 'b' is 98, etc.)
          printf("%c", s[i] - 32);
      }
      else
      {
        printf("%c", s[i]);
      }
  }
  printf("\n");
}