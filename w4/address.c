#include <stdio.h>

/* 
Memory is made up of bytes, which is a bunch of 0s and 1s. A 'pointer' is a variable which stores the address of some variable - the location of some variable - or more specifically, a pointer stores the specific byte in which that variable is stored.

The & operator in front of a variable name specifies you want the location of that variable

To store that location you need to specify the type with: int *p

This returns a hexadecimal location (ex: 0x16aec72b)

In programming, to avoid confusion with which number system is being used (ex: decimal or hexadecimal), 0x is placed in front of the hexadecimal number

*/

int main(void)
{
    int n = 50;
    int *p = &n;

    // This will print a new location each time the file is ran
    printf("%p\n", p);
}