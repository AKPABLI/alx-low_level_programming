#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i; /*unsigned interger hold positive values only*/
	char *cr;

	i = 1;
	cr = (char *) &i;

	return ((int)*cr);
}
