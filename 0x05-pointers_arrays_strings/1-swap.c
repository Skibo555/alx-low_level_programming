#include <stdio.h>
#include "main.h"

/**
 * swap_int - it swaps values of two variables.
 *
 * @a: pointer variable to be swaped.
 * @b: pointer variable to be swapped second.
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*b = c;
	*a = d;
}
