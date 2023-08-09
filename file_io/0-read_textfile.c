#include "main.h"
/**
 * read_textfile - reads a text file
 * @filename: pointer to the name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letters read and printed,  or 0 upon failure
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rN, wN;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	rN = read(fd, buffer, letters);
	if (rN == -1)
		rN = 0;
	else
	{
		wN = write(STDOUT_FILENO, buffer, rN);
		if (wN == -1)
			rN = 0;
	}
	free(buffer);
	close(fd);
	return (rN);
}
