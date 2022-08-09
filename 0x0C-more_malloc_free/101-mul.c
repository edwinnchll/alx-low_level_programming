#include<string.h>
#include "main.h"

/**
 * _isdigit - checks if character is digit
 * @Num3: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int Num3)
{
	return (Num3 >= '0' && Num3 <= '9');
}

/**
 * _strlen - returns the length of Num1 string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: the first big number string
 * @s2: the second big number string
 *
 * Return: the product big number string
 */
char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, Num1, Num2, Num3, Check;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(Num1 = Check = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (Num1--)
		r[Num1] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		Num1 = s1[l1] - '0';
		Num3 = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			Num2 = s2[l2] - '0';

			Num3 += r[l1 + l2 + 1] + (Num1 * Num2);
			r[l1 + l2 + 1] = Num3 % 10;

			Num3 /= 10;
		}
		if (Num3)
			r[l1 + l2 + 1] += Num3;
	}
	return (r);
}


/**
 * main - multiply two big number strings
 * @argc: the number of arguments
 * @argv: the argument vector
 *
 * Return: Always 0 on success.
 */
int main(int argc, char **argv)
{
	char *r;
	int Num1, Num3, Check;

	if (argc != 3)
		printf("Error\n"), exit(98);

	Check = _strlen(argv[1]) + _strlen(argv[2]);
	r = big_multiply(argv[1], argv[2]);
	Num3 = 0;
	Num1 = 0;
	while (Num3 < Check)
	{
		if (r[Num3])
			Num1 = 1;
		if (Num1)
			_putchar(r[Num3] + '0');
		Num3++;
	}
	if (!Num1)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
