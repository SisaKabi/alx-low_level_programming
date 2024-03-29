#include "main.h"
#include <stddef.h>

/**
 * _strlen - measures and returns a strings length
 * @s: string to be measured
 *
 * Return: String length;
 */
int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
