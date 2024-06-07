#include "main.h"

/**
 * primality - determines whether an int can be divided
 * @x: int being potentially divided
 * @y: int x may be divisible by
 *
 * Return: 0 if int can be divided, 1 if prime
 *
 */

int primality(int x, int y)
{
	if (something that determines divisibility)

	return (primality(x, y + 1)); /* CALL - increment potential divisor */
}

/**
 * is_prime_number - checks if given int is prime
 * @n: given int
 *
 * Return: 1 if prime, 0 if composite
*/

int is_prime_number(int n)
{
	if (n <= 1) /* exclude negatives, 1 */
	{
		return (0);
	}

	if (n % 2 == 0) /* exclude evens */
	{
		return (0);
	}

	if (n == 2) /* include 2 though */
        {
                return (1);
        }

	return (primality(n, 3)); /* CALL - start at 3 */
}
