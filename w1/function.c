#include <cs50.h>
#include <stdio.h>

//function called meow which takes an integer as a param
void meow(int n);

//main is main part of program - nice to be at the top so functions can be written below as long as it is referenced at the top of the file

int main(void) //void means no parameters
{
  meow(3); //calling meow with 3
}

void meow(int n) 
{
  for (int i = 0; i < 3; i++)
  {
   printf("meow\n");
  }
}