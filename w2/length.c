#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string name = get_string("Name: ");


  // character counter
  int i = 0;

  // checking length of string - if the character does not equal '\0', it is a valid character and it should count
  while (name[i] != '\0')
  {
      i++;
  }
  printf("%i\n", i);
}