#include "main.h"

/**
 * _puts_recursion - prints to stdout with recursion
 * @s: string to be printed
 *
 * Return: Implicit
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	} else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
