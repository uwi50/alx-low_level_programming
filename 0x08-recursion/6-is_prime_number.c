#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - checks if a number is prime or not
 * @n: number to check
 *
 * Return: 1 if it is prime 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - check of the prime number by using recursion
 * @n: number to check
 * @i: iteration
 *
 * Return: 1 if it's prime and 0 otherwise
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
