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
	int o, wrt, length;

	if (filename == NULL)
		return (-1);

	length = 0;
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
