#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar (char c);

int printer (void)
{
	printf("_putchar""\n");
	return (0);
}
void print_alphabet(void)
{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return;
}
int print_alphabet_x10(void)
{	
	char a;
	int i = 0;

	while (i < 10)
	{
		a = 'a';

		while (a <= 'z')
		{
			putchar(a);
			a++;
		}
		putchar('\n');
		i++;
	}
	return (0);
}
int alphabet_x10(void);

int _islower(int c);
