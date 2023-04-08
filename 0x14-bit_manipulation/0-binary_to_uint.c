#include "main.h"

/**
 * binary_to_uint - to change or convert  a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int length, basetwo;

	if (!b)
		return (0);

	i = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, basetwo = 1; length >= 0; length--, basetwo *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			i += basetwo;
		}
	}

	return (i);
}
