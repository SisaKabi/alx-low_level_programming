#include "main.h"

/**
 * print_line - prints  a line of characters to the stdout
 * @n: the number of times '_' character is printed
 *
 * Return: void function
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int p;

		for (p = 1; p <= n; p++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
