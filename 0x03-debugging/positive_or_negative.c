#include <stdio.h>
#include "main.h"
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void positive_or_negative(int i)
{
    if (i > 0)
        printf("%i is positive\n", i);
    else if (i < 0)
        printf("%i is negative\n", i);
    else
        printf("%i is zero\n", i);
}


