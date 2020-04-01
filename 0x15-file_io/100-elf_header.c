#include "holberton.h"

/**
 * main - Entry point
 * @argc: Count of the arguments to start the program
 * @argv: An array of strings containing the arguments passed to the program
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int openFile, readFile;
	char header[5];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		EXIT(98);
	}
	openFile = open(argv[1], O_RDONLY);
	readFile = read(openfile, header, 5);

	if (readFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
