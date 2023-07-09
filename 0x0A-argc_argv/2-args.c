#include <stdio.h>

/**
 * main - prints all arguments ist recieves followed by a new line
 * @argc:  counts arguments in the command line
 * @argv: an array of strings in the command line
 * Return: returns (0) always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
