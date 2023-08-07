#include "main.h"

/**
 * read_textfile - function that reads a text file
 * @filename: file name
 * @letters: how many letter will be read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/* Declare variables */
	int f, n;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	n = read(f, buf, letters);
	buf[letters + 1] = '\0';
	write(STDOUT_FILENO, buf, n);
	free(buf);
	close(f);

	return (n);
}
