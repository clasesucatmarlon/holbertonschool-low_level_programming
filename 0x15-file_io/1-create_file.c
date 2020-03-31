#include "holberton.h"
#include <errno.h>

/**
 * create_file - Function that creates a file.
 * @filename: The name of the file to create.
 * @text_content: Is a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int openFile;
	int i;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	openFile = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (openFile < 0)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(openFile, &text_content[i], 1) == -1)
			return (-1);
	}
	close(openFile);
	return (1);
}
