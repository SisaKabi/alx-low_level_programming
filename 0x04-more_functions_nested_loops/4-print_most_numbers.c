#include "main.h"

/**
 * print_most_numbers - prints most digits (0 through 9)
 *
 * Return: Implicit return
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2')
		{
			if (c != '4')
			{
				_putchar(c);
			}
		}
	}
	_putchar('\n');
}
