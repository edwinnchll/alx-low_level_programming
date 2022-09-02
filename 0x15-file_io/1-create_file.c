#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - function that will create a new file with content
 * @filename: name of the file to create.
 * @text_content: text to add to the new file.
 *
 * Return: Always 1 on no error, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int err, len, fileDescriptor;

	err = len = fileDescriptor = 0;
	if (!filename)
		return (-1);

	fileDescriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fileDescriptor < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	err = write(fileDescriptor, text_content, len);
	if (err < 0)
		return (-1);
	close(fileDescriptor);
	return (1);
}
