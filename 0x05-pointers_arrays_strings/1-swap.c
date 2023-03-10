#include "main.h"

/**
 * swap_int - swaps the values of two given variables
 * @a: first variable
 * @b: second variable
 *
 * Return: Implicit
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
