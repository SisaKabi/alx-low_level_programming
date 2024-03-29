#include "main.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: base number
 * @y: exponent
 *
 * Return: -1 if error. result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
