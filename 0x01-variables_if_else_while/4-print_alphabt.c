#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	char x;
	while ((x = 'a') && x!= 'q' && x!= 'e')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}

