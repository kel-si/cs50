#include <cs50.h>
#include <stdio.h>

// main is the way you can specify your program takes command line arguments

// argc == argument count (how many words are entered by a human)

//argv == argument vector (array containing all the words entered by a human in the CL after the program name)

int main (int argc, string argv[])
{
    printf("Hello, %s\n", argv[1]);
}