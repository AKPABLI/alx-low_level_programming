#include "main.h"
#define BUF_SIZE 1024

/**
* main - main
* @argc: number of arguments
* @argv: a pointer point to the array of arguments
* Return: Always 0
**/

int main(int argc, char **argv)
{
	int f1, f2, res1, res2;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = malloc(sizeof(char) * BUF_SIZE);
	if (!buff)
		return (0);

	f2 = open(argv[1], O_RDONLY);
	error_98(f1, buffer, argv[1]);
	f1 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(f0, buffer, argv[2]);
	do {
		res1 = read(f2, buff, BUF_SIZE);
		if (res1 == 0)
			break;
		error_98(res1, buff, argv[1]);
		res2 = write(f1, buff, res1);
		error_99(res2, buff, argv[2]);
	} while (res2 >= BUF_SIZE);
	res1 = close(f1);
	error_100(res1, buff);
	res1 = close(f2);
	error_100(res1, buff);
	free(buffer);
	return (0);
}

/**
* error_98 - checks error 98
* @f0: the value to check
* @buffer: the buffer
* @argv: argument
**/
void error_98(int f0, char *buffer, char *argv)
{

	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
* error_99 - checks error 99
* @f0: value to check
* @buffer: the buffer
* @argv: argument
*/
void error_99(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_100 - checks error 100
* @f0: the value to check
* @buffer: the buffer
*/
void error_100(int f0, char *buffer)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f0);
		free(buffer);
		exit(100);
	}
}
