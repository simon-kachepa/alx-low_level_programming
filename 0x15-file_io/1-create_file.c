#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: The name of the file
 * @content: The content to be written to the file
 * Return: if text_content is NULL create an empty file
 */

int create_file(const char *filename, char *text_content)
{
	int fptr, wrt, length;

	if (filename == NULL)
	{
		return (-1);
	}

	length = 0;
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fptr, text_content, length);

	if (fptr == -1 || wrt == -1)
		return (-1);

	close(fptr);

	return (1);
}
