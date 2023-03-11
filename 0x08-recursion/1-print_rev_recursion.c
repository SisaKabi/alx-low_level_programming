#include "main.h"

/**
 * _print_rev_recursion - prints the reverse of the string to the stdout
 * @s: string to be reversed and printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		s++;
	if (*s == '\0')
		_putchar(*s--);
}
