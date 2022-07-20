#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string names[] = {"Taylor", "Meredith", "Olivia", "Benji"};

    for (int i = 0; i < 4; i++)
    {
        // cannot compare two strings this way
        // if (names[i] == "Olivia")

        //strcmp is a helper function -- returns 0 if strings are the same; less than 1 if first string comes before second and greater than 0 if the second string comes before first (ASCII)
        if (strcmp(names[i], "Meredith") == 0)
        {
            printf("Found🐱\n");
            return 0;
        }
    }
    printf("Not found!🚨\n");
    return 1;
}