#include "main.h"

/**
 * print_diagonal - prints a diagonal line to the stdout
 * @n: the number of times '\' character is printed
 *
 * Return: void function
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, p;

		for (i = 0; i < n; i++)
		{
			for (p = 1; p <= n; p++)
			{
				if (p == i)
					_putchar('\\');
				else if (p < 1)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
