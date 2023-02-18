#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers go there */

/**
 * main - checks if the number is positive negative or zero
 *
 * Return: 0 for success, otherwise for failure
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
	{
		printf("%i is positive\n", n);
	}else 
	{
		if ( n == 0 )
		{
			printf("%i is zero\n", n);
		}else
		{
			if ( n < 0 )
			{
				printf("%i is negative\n", n);
			}	
		}
	}
	return (0);
}
