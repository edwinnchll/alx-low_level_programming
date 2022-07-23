#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two digits
 * @argc: Argument counter
 * @argv: Array to save auguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc < 2 || argc != 3)
	{
		printf("Error\n");
		return (1);
	}

		for (i = 1; i < argc; i++)
			{
			mult *= atoi(argv[i]);
			}

	printf("%d\n", mult);

	return (0);
}
