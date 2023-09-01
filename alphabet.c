#include <stdio.h>

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 */
void print_alphabet(void)
{
    for (char l = 'a'; l <= 'z'; l++)
    {
        putchar(l);
    }
    putchar('\n');
}
