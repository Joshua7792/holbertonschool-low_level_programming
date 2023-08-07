#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success and -1 on failure, if filename is null return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, len;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_APPEND | O_RDWR);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		write(f, text_content, len);
		close(f);
	}
	return (1);
}
