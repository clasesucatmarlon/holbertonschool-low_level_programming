#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of a file.
 * don't have the required permissions to write to the file.
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int openFile;
	int i;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	openFile = open(filename, O_APPEND | O_WRONLY);
	if (openFile == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(openFile, &text_content[i], 1) == -1)
		{
			close(openFile);
			return (-1);
		}
	}
	close(openFile);
	return (1);
}
