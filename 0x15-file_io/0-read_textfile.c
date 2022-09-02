#include "main.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - read a text file and print it out
 * @filename: body of text to print.
 * @letters: max char to print.
 * Return: number of chars printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int y, x, z;
	char *buf;

	x = y = z = 0;
	if (!filename || !letters)
		return (0);
	x = open(filename, O_RDONLY);
	if (x < 0)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf)
		return (0);
	z = read(x, buf, letters);
	if (z < 0)
	{
		free(buf);
		return (0);
	}
	buf[letters] = '\0';
	y = write(STDOUT_FILENO, buf, z);
	if (y <= 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(x);
	return (z);
}
