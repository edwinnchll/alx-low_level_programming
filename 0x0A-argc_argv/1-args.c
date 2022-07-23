#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: Argument counter
 * @argv: Array on arguments stored
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
