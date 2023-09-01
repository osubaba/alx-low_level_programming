#include <stdio.h>
/**
 * _putchar - prints _putchar follwed by a new line
 * Return: returns 0 (always)
 */
int main(void)
{
	char str[] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')

	{
		putchar(str[i]);
			i++;
	}
	return (0);
}
