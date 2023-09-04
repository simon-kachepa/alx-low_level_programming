#include "main.h"

/**
 * append_text_to_file - function that appends text
 * at the end of a file.
 * @filename: he name of the file
 * @text_content: is the NULL terminated string to add
 * at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, length;

	if (filename == NULL)
		return (-1);

	length = 0;
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, length);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}
