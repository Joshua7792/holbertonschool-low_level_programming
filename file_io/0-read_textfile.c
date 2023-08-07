#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: file name
 * @letters: how many letters will be read
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declare variables */
	int f, n;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0); /* Return 0 if memory allocation fails */

	if (filename == NULL)
		return (0); /* Return 0 if filename is NULL */

	/* Open the file for reading */
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0); /* Return 0 if file cannot be opened */

	/* Read from the file into the buffer */
	n = read(f, buf, letters);
	buf[letters + 1] = '\0'; /* Null-terminate the buffer */

	/* Write the contents of the buffer to standard output */
	write(STDOUT_FILENO, buf, n);

	/* Clean up and close the file */
	free(buf);
	close(f);

	/* Return the number of letters read and printed */
	return (n);
}
