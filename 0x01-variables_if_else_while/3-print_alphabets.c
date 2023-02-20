#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char n;
	char m;
	n = 'a';
	m = 'A';

	while (n <= 'z' && m <= 'Z')
	{
		putchar(n);
		putchar(m);
		putchar('$');
	}
        return (0);
}
