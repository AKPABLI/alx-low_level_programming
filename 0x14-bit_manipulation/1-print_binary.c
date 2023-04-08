#include "main.h"

/**
 * print_binary - converts or change  the decimal format number into binary
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	/*binary number to be printed*/
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
