#include "main.h"
/**
 * print - prints alphabet
 * Discription: prints alphabet letters in lowercase from a to z
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
