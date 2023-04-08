#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: then  an error should occur- -1.
 *         Otherwise - 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* if the index is greater than the required, return -1*/
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	/*returns the new number */
	*n ^= (1 << index);/* shift n to the requires index */

	return (1);
}
