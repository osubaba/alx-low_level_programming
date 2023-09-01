#include <stdio.h>
/**
 * osu - Understanding function declaration
 * Return: returns 'a'(always)
 */
char osu(void);
/**
 * main Block - main entry
 * Return: returns 0 always
 */
int main(void)
{
	char c = osu()

	printf("char is %c\n", c);
}

char osu(void)
{
	return ('a');
}

