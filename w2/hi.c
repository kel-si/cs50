#include <stdio.h>
#include <cs50.h>

int main(void)
{
  char c1 = 'H';
  char c2 = 'I';
  char c3 = '!';

  // will print the characters
  printf("%c%c%c\n", c1, c2, c3);
  

  string s = "HI!";
  printf("%s\n", s);

  //will print integers (72, 73, 33)
  printf("%i,%i,%i\n", s[0], s[1], s[2]);

  // will print the ASCII chars (72, 73, 33) (implicit type conversion / implicit casting)
  printf("%i %i %i\n", c1, c2, c3);

  // explicitly converting chars to ints
  printf("%i %i %i\n", (int) c1, (int) c2, (int) c3);
}