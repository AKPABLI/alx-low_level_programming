#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content:  to add a context ot a text
 * vinxtech
 * Return:if file exists retuns as 1 if fails does not exist should be -1
 * incase  if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int x_letters;
	int Wr;

	if (!filename)
		return (-1);

	i = open(filename, O_WRONLY | O_APPEND);

	if (i == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; x_letters++)
			;

		Wr = write(i, text_content, x_letters);

		if (Wr == -1)
			return (-1);
	}

	close(i);

	return (1);
}
