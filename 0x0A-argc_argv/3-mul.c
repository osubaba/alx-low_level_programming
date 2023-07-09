#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints result of multiplication, followed by anew line
 * @argc: counts arguments in the comnmand line
 * @argv: an array of string
 * Return: (0) success
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
