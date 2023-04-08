#include "main.h"

unsigned int get_length(unsigned long int num);
/**
 * flip_bits -  returns the number of bits to be flipped in 'n' to give 'm'
 * @n: first number provided
 * @m: second number provided
 * Return: number of bits to be flipped in both numbers to make them equal
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count, len1, len2, total_len;
	int b1, b2;

	len1 = get_len(n);
	len2 = get_len(m);
	total_len = (len1 > len2) ? len1 : len2;

	count = 0;
	for (x = 0; x < total_len; i++)
	{
		b1 = n & 1;
		b2 = m & 1;
		if (b1 != b2)
			count++;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}

/**
 * get_length - returns the number of bits in a number
 * @num: number to consider
 *
 * Return: length of number
 */
unsigned int get_length(unsigned long int num)
{
	unsigned int count;

	if (num == 0)
		return (1);
	for (count = 0; num != 0; count++)
		num >>= 1;
	return (count);
}
