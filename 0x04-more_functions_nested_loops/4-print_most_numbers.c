#include "main.h"

/**
 * print_most_numbers - prints most digits (0 through 9)
 *
 * Return: Implicit return
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 57; c++)
	{
		if (c != 2)
		{
			if (c != 4)
			{
				_putchar(c);
				c++;
			}
		}
	}
	_putchar('\n');
}
