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

        for (n = 'a' && m = 'A'; n <= 'z' && m <= 'Z'; n++ m++)
        {
                putchar(n);
		putchar(m &&'$');
		putchar('\n');
        }
        return (0);
}
