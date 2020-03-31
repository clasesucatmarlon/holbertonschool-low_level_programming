#include "holberton.h"

/**
 * main - Entry point
 * @argc: Count of the arguments to start the program
 * @argv: An array of strings containing the arguments passed to the program
 * Return: zero
 */
int main(int argc, char **argv)
{
	char *fileFrom;
	char *fileTo;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: No could copy file_from file_to\n");
		exit(97);
	}
	fileFrom = argv[1];
	fileTo = argv[2];

	open_files(fileFrom, fileTo);
	exit(0);
	return (0);
}

/**
 * open_files - Opens the files necessary for copying contents
 * @fileFrom: Name of the file FileFrom
 * @fileTo: Name of the file FileTo
 * Return: zero
 */
int open_files(char *fileFrom, char *fileTo)
{
	int fileFrom2;
	int fileTo2;

	fileFrom2 = open(fileFrom, O_RDONLY);
	if (fileFrom2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", fileFrom);
		exit(98);
	}

	fileTo2 = open(fileTo, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fileTo2 == -1)
	{
		fileTo2 = open(fileTo, O_WRONLY | O_TRUNC);
		if (fileTo2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write from file %s\n", fileTo);
			exit(99);
		}
	}
	read_files(fileFrom2, fileTo2, fileFrom, fileTo);
	if (close(fileFrom2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom2);
		exit(100);
	}
	if (close(fileTo2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo2);
		exit(100);
	}
	return (0);
}

/**
 * read_files - Reads the file fomFile
 * @fileFrom2: File descriptor fileFrom2
 * @fileTo2: File descriptor for fileTo2
 * @fileFrom: Name of the file fileFrom
 * @fileTo: Name of the file fileTo
 * Return: zero
 */
int read_files(int fileFrom2, int fileTo2, char *fileFrom, char *fileTo)
{
	int read_chars;
	char buff[1024];

	read_chars = read(fileFrom2, buff, 1024);
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
		exit(98);
	}
	write_to_file(buff, fileTo2, read_chars, fileTo);
	while (read_chars != 0)
	{
		read_chars = read(fileFrom2, buff, 1024);
		if (read_chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
			exit(98);
		}
		if (read_chars == 0)
			return (0);
		write_to_file(buff, fileTo2, read_chars, fileTo);
	}
	return (0);
}

/**
 * write_to_file - Writes to a file TO_FILE.
 * @buff: An array of characters containing until 1024 chars.
 * @fileTo2: File descriptor of fileTo2.
 * @read_chars: representing how many charact were read and need to be written
 * @fileTo: Name of the file fileTo
 * Return: zero
 */
int write_to_file(char *buff, int fileTo2, int read_chars, char *fileTo)
{
	int i;

	for (i = 0; i < read_chars; i++)
	{
		if (write(fileTo2, &buff[i], 1) == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fileTo);
			exit(99);
		}
	}
	return (0);
}
