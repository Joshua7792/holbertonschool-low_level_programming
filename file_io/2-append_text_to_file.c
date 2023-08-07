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
		return (-1); /* Return -1 if filename is NULL */

	/* Open the file for appending and reading */
	f = open(filename, O_APPEND | O_RDWR);
	if (f == -1)
		return (-1); /* Return -1 if file cannot be opened */

	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		len = strlen(text_content);

		/* Append the content to the end of the file */
		write(f, text_content, len);

		close(f); /* Close the file descriptor */
	}

	return (1); /* Return 1 on success */
}
