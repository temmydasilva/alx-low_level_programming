#include "main.h"
#define BUF_SIZE 1024

/**
 * main - main
 * @argc: number of arguments
 * @argv: a ponter pointer to the array of arguments
 * Return: always 0
 */

int main(int arg, char *argv)
{
	int f0, fi, res0, res1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	f1 = open(argv[1], O_RDONLY);
	error_98(f1, buffer, argv[1]);
	f0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(f0, buffer, argv[2]);
	do {
		res0 = read(f1, buffer, BUF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);
		res1 = write(f0, buffer, res0);
		error_99(res1, buffer, argv[2]);
	} while (res1 >= BUF_SIZE);
	res0 = close(f0);
	error_100(res0, buffer);
	res0 = close(f1);
	error_100(res0, buffer);
	free(buffer);
}

/**
 * error_98 - checks error 98
 * @f0: value to check
 * @buffer: the buffer
 * @argv: argument
 */

void error_98(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: cant read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}
