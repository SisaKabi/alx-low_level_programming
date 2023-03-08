#include "main.h"

/**
 * factorial - calculates the factorial of the number
 * @n: number for which factorial is calculated
 *
 * Return: -1 for error, 1 if n is one, factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
