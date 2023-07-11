#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string
 * @str: The string to evaluate
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}

		str++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix;
	int i, j, len = 0, words = 0, c = 0, start = 0, end = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	while (str[len])
		len++;

	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			if (c > 0)
			{
				end = i;
				matrix[j] = malloc(sizeof(char) * (c + 1));
				if (matrix[j] == NULL)
				{
					for (j = 0; j < i; j++)
						free(matrix[j]);
					free(matrix);
					return (NULL);
				}
				for (j = 0; j < c; j++)
					matrix[j][j] = str[start + j];
				matrix[j][c] = '\0';
				j++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[j] = NULL;

	return (matrix);
}

