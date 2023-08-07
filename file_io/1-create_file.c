#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: if filename is null (-1), on sucedd (1), upon fail (-1)
 */

int create_file(const char *filename, char *text_content)
{
	int f, len; /* Declare file descriptor and length variables */

	if (filename == NULL)
		return (-1); /* Return -1 if filename is NULL */

	/* Open or create the file with read-write permissions (rw-------) */
	f = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (f == -1)
		return (-1); /* Return -1 if file cannot be opened or created */

	if (text_content != NULL)
	{
		/* Calculate the length of text_content */
		len = strlen(text_content);

		/* Write the content to the file */
		write(f, text_content, len);

		close(f); /* Close the file descriptor */
	}

	return (1); /* Return 1 on success */
}
