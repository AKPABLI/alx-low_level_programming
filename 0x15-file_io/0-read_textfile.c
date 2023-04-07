#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return:  It fails, returns 0:.numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t Rd, Wr;
	char *buffer;

	if (!filename)
		return (0);

	i = open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	Rd = read(i, buffer, letters);
	Wr = write(STDOUT_FILENO, buffer, Rd);

	close(i);

	free(buffer);

	return (Wr);
}
