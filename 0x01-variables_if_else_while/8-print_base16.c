#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int b;
	char n;
	char m;

	b = 0;
	n = (char)b;

	for (n = 0; n <= 9; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar ('\n');

	return (0);
}
