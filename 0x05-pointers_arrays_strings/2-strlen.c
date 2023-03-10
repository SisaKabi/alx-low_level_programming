#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: string to be printed
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
