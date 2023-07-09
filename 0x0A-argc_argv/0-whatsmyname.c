#include <stdio.h>

/**
 * main - prints the new name
 * @argc: counts arguments to main
 * @argv: an array of strings
 * Return: (0) success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);

	return (0);

}
