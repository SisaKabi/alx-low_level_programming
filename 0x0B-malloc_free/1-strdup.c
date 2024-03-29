#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns the duplicate
 * @str: string to be duplicated
 *
 * Return: duplicate string on success; Null if failure
 */
char *_strdup(char *str)
{
	int len = 0;
	char *dup, *offset, *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		len++;
		str++;
	}
	if (len == 0)
	{
		dup = (char *)malloc(1 * sizeof(char));
	} else
	{
		dup = (char *)malloc((len + 1) * sizeof(char));
	}

	if (dup == NULL)
		return ((char *)NULL);
	offset = dup;
	ptr = str - len;

	while (*ptr)
	{
		*offset = *ptr;
		offset++;
		ptr++;
	}
	*offset = '\0';

	return (dup);
}
