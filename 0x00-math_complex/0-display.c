#include "holberton.h"

/**
 * display_complex_number - Displays the complex numbers.
 * @c: Complex number a + ib represented by two doubles.
 */

void display_complex_number(complex c)
{
	printf("%.0f", c.re);
	if (c.im != 0)
		printf(" + %.0fi\n", c.im);
	else
		printf("\n");
}
