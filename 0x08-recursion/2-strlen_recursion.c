#include "main.h"

/**
 * _strlen_recursion - measures the length of the given string
 * @s: string to be measured
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		_strlen_recursion(s++);
	}
	if (*s == '\0')
		return (len);
	else
		return (-1);
}
