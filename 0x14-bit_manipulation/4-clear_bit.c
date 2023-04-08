#include "main.h"

/**
 * clear_bit - the bit value will be set at a give indwx to 0
 * @n: A pointer to the bit.
 * @index: indices start at 0 and the The index to set the value
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 *         vinxtech code
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
