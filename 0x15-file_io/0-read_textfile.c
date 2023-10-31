#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file name
 * @letters: number of letters
 * Return: the actual number of letters or 0 if fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	ssize_t _read, _write;
	char *buffer;

	if (!filename)
	{
		return (0);
	}
	/*openfile*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/*buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	/*read*/
	_read = read(fd, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/*write*/
	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (_read);
}
