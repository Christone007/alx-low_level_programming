#include "main.h"

/**
* divide_till_prime - A helper to check if a number is prime
* @n: The number to be checked
* @d: The divider
*
* Return: 0 if not prime, 1 if prime
*/
int divide_till_prime(int n, int d)
{
	if (n == d)
		return (1);
	else if (n % d == 0)
		return (0);
	d++;
	return (divide_till_prime(n, d));
}

/**
* is_prime_number - Checks if a number is prime
* @n: The number to be checked
*
* Return: 1 if prime and 0 if not prime
*/
int is_prime_number(int n)
{
	int d;

	d = 2;
	if (n <= 1)
		return (0);

	return (divide_till_prime(n, d));
}
