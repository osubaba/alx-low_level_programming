#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes to be concatenated from src
 *
 * Return: Pointer to the resulting string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Get the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate src to dest */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	dest[dest_len] = '\0';

	return (dest);
}

