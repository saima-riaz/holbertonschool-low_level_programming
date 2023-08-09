#include "main.h"
/**
 * error_file - check file fail
 * @file_to: destination
 * @file_from: source
 * @argv: argument vector
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		/*stderr_fileno = 2*/
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check code
 * @argc: number of argument
 * @argv:list of argument vector
 * Return: 0 if success 97 incorrect number of arguments
 *         98 first file does not exit or unreadbke
 *         99 can't write in second file
 *        100 close failed
 */
int main(int argc, char *argv[])
{
	int sm, rz, err_close;
	int len, nw;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(2, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	sm = open(argv[1], O_RDONLY);
	rz = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	/*TRUNC = cause the files to be truncated if it exists */
	error_file(sm, rz, argv);

	len = 1024;
	while (len == 1024)
	{
		len = read(sm, buffer, 1024);
		if (len == -1)
			error_file(-1, 0, argv);
		nw = write(rz, buffer, len);
		if (nw == -1)
			error_file(0, -1, argv);
	}
	err_close = close(sm);
	err_close = close(rz);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", sm);
		exit(100);
		/*dprintf = print to file descriptor*/
	}
	return (0);
}
