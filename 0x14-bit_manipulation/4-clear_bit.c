#include "main.h"

/**
 * clear_bit - this sets the value of a given bit to zero(0)
 * @n: this points to the number to be changed
 * @index: index of the bit to clear
 *
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

