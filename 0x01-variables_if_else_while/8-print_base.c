#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char m;
	char r;

	n = 0;
	m = 'a';
	r = (char)n;

	while (n <= 9 && m <= 'f')
	{
		putchar(r);
		putchar(m);
		n++;
		m++;
	}
	putchar ('\n');

	return (0);
}
