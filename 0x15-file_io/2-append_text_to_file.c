
#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

/**
 * append_text_to_file - add text to end of file
 * @filename: name of file to write into.
 * @text_content: text to append to file
 *
 * Return: 1 no error, else -1 when error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, err, len;

	fileDescriptor = err = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(fileDescriptor, text_content, len);
	if (err < 0)
		return (-1);
	close(fileDescriptor);
	return (1);
}
