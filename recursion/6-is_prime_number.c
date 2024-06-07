#include "main.h"

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

	return (is_divisible(n, 3)); /* CALL - start at 3 */
}
