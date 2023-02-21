#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1.
 * On error , -1 is returned, and errno is set appropriately.
 */
int printer (void)
{
	printf("_putchar");
	printf("\n");
	return 0;
}

void print_alphabet (void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar (a);
		a++;
	}
}
