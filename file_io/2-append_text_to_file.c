#include "main.h"
/**
 * append_text_to_file - appends text at end of the file
 *
 * @filename :  name of the file.
 * @text_content : text to add in file
 * Return: 1 (success)  -1(failed)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w = 0, c = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (w = 0; text_content[w];)
			w++;
		c = write(fd, text_content, w);
	}
	if (close(fd) == -1 || c == -1)
		return (-1);
	return (1);
}
