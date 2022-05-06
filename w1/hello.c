#include <cs50.h>
// library

#include <stdio.h>
//library that gives you access to print outs


int main(void)
{
  printf("Hello, World!\n");
  string answer = get_string("What's your name? ");
  printf("Hello, %s\n", answer);

}

// `make hello` - to compile the file

// `./hello` to execute and see output

// if the code is changed, `make hello` again to recompile