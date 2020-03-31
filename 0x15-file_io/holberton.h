#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* task 0 - reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* task 1 - create file */
int create_file(const char *filename, char *text_content);

/* task 2 - append text to file */
int append_text_to_file(const char *filename, char *text_content);

/* task 3 - copies the content of a file to another file */
int open_files(char *fileFrom, char *fileTo);
int read_files(int fileFrom2, int fileTo2, char *fileFrom, char *fileTo);
int write_to_file(char *buff, int fileTo2, int read_chars, char *fileTo);



#endif
