#include "_putchar.c"

/**
 * alphabet - prints the english alphabet to stdout
 *
 * Return: Always 0.
 */
int alphabet (void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	return (0);
}
