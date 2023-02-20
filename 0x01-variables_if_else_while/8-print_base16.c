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

	n = 0;
	m = 'a';

	while (n <= 9 && m <= 'f')
	{
		putchar(n);
		putchar(m);
		n++;
		m++;
	}
	putchar ('\n');

	return (0);
}
