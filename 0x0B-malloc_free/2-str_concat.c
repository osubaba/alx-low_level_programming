#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings using malloc
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concat string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int o, s, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (o = 0; s1[o] != '\0'; o++)
		;
	for (s = 0; s2[s] != '\0'; s++)
		;

	a = malloc((o * sizeof(*s1)) + (s * sizeof(*s2)) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (o + s + 1); c++)
	{
		if (c < o)
			a[c] = s1[c];
		else
			a[c] = s2[d++];
	}

	return (a);
}
