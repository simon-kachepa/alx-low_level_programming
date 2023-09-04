#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: The name of the file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fptr, wrt, n;

	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	n = read(fptr, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, n);

	free(buffer);
	close(fptr);
	return (wrt);
}
