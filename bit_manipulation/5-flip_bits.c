#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit_count = 0;
	unsigned int iterator = 0;

	while (iterator < (sizeof(n) * 8)) /* while less than 64 bits */
	{
		for (iterator = 0; iterator < (sizeof(n) * 8); iterator++)
		{
			if (((n >> iterator) & 1) != ((m >> iterator) & 1)) /* if different bits */
			
		}