#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0
 */
int main(void)
{
	printf("sizeof a char: %d byte(s)\n", sizeof(char));
	printf("sizeof an int: %d byte(s)\n", sizeof(int));
	printf("sizeof a long int: %d byte(s)\n", sizeof(long int));
	printf("sizeof a long long int: %d byte(s)\n", sizeof(long long int));
	printf("sizeof a float: %d byte(s)\n", sizeof(float));

	return (0);
}

