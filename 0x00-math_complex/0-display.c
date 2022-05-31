#include "holberton.h"

/**
 * display_complex_number - Displays the complex numbers.
 * @c: Complex number a + ib represented by two doubles.
 * Return: Complex number printed.
 */

void display_complex_number(complex c)
{
	if (c.re == 0 && c.im == 0)
		return;
	else if (c.im == 0)
		printf("%.1f\n", c.re);
	else if (c.re == 0)
		printf("%.1fi\n", c.im);
	else
	{
		printf("%.1f", c.re);
		if (c.im < 0)
		{
			printf(" - ");
			c.im *= -1;
		}
		else
			printf(" + ");
		c.im == 1 ? printf("i\n") : printf("%.1fi\n", c.im);
	}
}
