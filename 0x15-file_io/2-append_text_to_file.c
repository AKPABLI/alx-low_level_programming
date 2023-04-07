#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int x_letters;
	int Wr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i== -1)
		return (-1);

	if (text_content)
	{
		for (x_letters = 0; text_content[x_letters]; x_letters++)
			;

		Wr = write(i, text_content, x__letters);

		if (Wr == -1)
			return (-1);
	}

	close(I);

	return (1);
}
