#include "holberton.h"

int open_files(char *fileFrom, char *fileTo);
int read_files(int newFrom, int newTo, char *fileFrom, char *fileTo);
int write_to_file(char *buff, int newTo, int read_chars, char *fileTo);
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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	fileFrom = argv[1];
	fileTo = argv[2];

	open_files(fileFrom, fileTo);
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
	int newFrom;
	int newTo;

	newFrom = open(fileFrom, O_RDONLY);
	if (newFrom == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
		exit(98);
	}

	newTo = open(fileTo, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (newTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileTo);
		exit(99);
	}

	read_files(newFrom, newTo, fileFrom, fileTo);
	if (close(newFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", newFrom);
		exit(100);
	}
	if (close(newTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", newTo);
		exit(100);
	}
	return (0);
}

/**
 * read_files - Reads the file fromFile
 * @newFrom: File descriptor newFrom
 * @newTo: File descriptor for newTo
 * @fileFrom: Name of the file fileFrom
 * @fileTo: Name of the file fileTo
 * Return: zero
 */
int read_files(int newFrom, int newTo, char *fileFrom, char *fileTo)
{
	int read_chars;
	char buff[1024];

	read_chars = read(newFrom, buff, 1024);
	if (read_chars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
		exit(98);
	}

	write_to_file(buff, newTo, read_chars, fileTo);
	while (read_chars != 0)
	{
		read_chars = read(newFrom, buff, 1024);
		if (read_chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fileFrom);
			exit(98);
		}
		if (read_chars == 0)
			return (0);
		write_to_file(buff, newTo, read_chars, fileTo);
	}
	return (0);
}

/**
 * write_to_file - Writes to a file TO_FILE.
 * @buff: An array of characters containing until 1024 chars.
 * @newTo: File descriptor of newTo.
 * @read_chars: representing how many charact were read and need to be written
 * @fileTo: Name of the file fileTo
 * Return: zero
 */
int write_to_file(char *buff, int newTo, int read_chars, char *fileTo)
{
	if (write(newTo, buff, read_chars) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileTo);
		exit(99);
	}
	return (0);
}
