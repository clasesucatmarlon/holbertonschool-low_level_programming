#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the file
 * @letters: number of letters to print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int openFile, i, countChar;
	char *memory;

	if (filename == NULL)
	{
		return (0);
	}
	memory = malloc(sizeof(char) * letters);
	if	(memory == NULL)
		return (0);
	openFile = open(filename, O_RDONLY);
	if (openFile == -1)
	{
		free(memory);
		return (0);
	}
	countChar = read(openFile, memory, letters);
	if (countChar == -1)
	{
		close(openFile);
		free(memory);
		return (0);
	}
	for (i = 0; i < countChar; i++)
	{
		if (write(STDOUT_FILENO, &memory[i], 1) == -1)
		{
			close(openFile);
			free(memory);
			return (0);
		}
	}
	close(openFile);
	free(memory);
	return (countChar);
}
