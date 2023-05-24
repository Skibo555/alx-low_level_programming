#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the timer in minutes and seconds.
 *
 *
 */

void jack_bauer(void)
{
	int m;
	int s;

	for (m = 0; m <= 23; m++)
	{
		for (s = 0; s <= 59; s++)
		{
			printf("%02d:%02d", m, s);
			printf("\n");
		}
	}
}
