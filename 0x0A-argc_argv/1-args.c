#include <stdio.h>

/**
 * main - prints number of arguments followed by a new line
 * @argc: counts the number of arguments passed
 * @argv: an array of strings of containing the arguments
 * Return: (0) success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
