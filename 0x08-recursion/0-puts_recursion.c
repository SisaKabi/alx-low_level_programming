#include "main.h"
/**
 * _puts_recursion - prints the string to the stdout
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
		return (_putchar('\n'));
	if (s != '\0')
		return (_putchar(s), _puts_recursion(s + 1));
}
