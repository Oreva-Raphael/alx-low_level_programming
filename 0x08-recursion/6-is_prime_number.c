#include "main.h"
/**
 * is_prime_number- funciton to determine if a number is a prime number
 * @n: the integer to confirm
 * Return: return 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_test(n, 2));
}
/**
 * prime_test- I got the idea from the other task
 * @n: the number to check
 * @divparadox: the divisor that will be recursively called
 * Return: the same thing
 */
int prime_test(int n, int divparadox)
{
	if (divparadox * divparadox > n)
	{
		return (1);
	}
	if (n % divparadox == 0)
	{
		return (0);
	}
	return (prime_test(n, divparadox + 1));
}

