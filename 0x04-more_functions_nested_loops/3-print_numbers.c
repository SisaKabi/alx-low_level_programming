#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: Implicit return
 */
void print_numbers(void)
{
	char c;

	while(c <= '9')
	{
		_putchar(c);
		c++;
	}
	return;
}
