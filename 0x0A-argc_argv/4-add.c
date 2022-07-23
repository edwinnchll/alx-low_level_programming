#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of two digits
 * @argc: Argument counter
 * @argv: Array to save auguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
		{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		}
	printf("%d\n", sum);

	return (0);
}
