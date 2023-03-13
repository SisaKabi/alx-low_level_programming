#include "main.h"

/**
 * _strlen_recursion - measures the length of the given string
 * @s: string to be measured
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
	{
		length++;
		_strlen_recursion(s + 1);
	}
	return (length);
}
