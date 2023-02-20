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
	char lower, upper;

	lower = 'a';

	upper = 'A';

	while (lower <= 'z' && upper <= 'Z')
	{
		putchar(lower);
		putchar(upper);
		putchar('$');
	}
	return (0);
}
