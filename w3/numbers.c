#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // creating an array with 7 integers - otherwise create with numbers[number of items] and then numbers[0] = 4, etc.;
    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 13)
        {
          printf("Found\n");
          return 0;
        }
    }
    printf("Not found\n");
    return 1;
    
}