#include "main.h"

/**
 * is_prime_recursive - function to check if a number is prime recursively.
 * @n: The number to be checked.
 * @i: The current divisor to check divisibility.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_recursive(int n, int i)
{
if (n < 2)
return (0);

if (i * i > n)
return (1);

if (n % i == 0)
return (0);

return (is_prime_recursive(n, i + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, 2));
}
