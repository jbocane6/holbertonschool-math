#include "holberton.h"

/**
 * multiplication - Performs the multiplication operation to complex numbers.
 * @c1: Complex number a + ib represented by two doubles.
 * @c2: Complex number a + ib represented by two doubles.
 * @c3: Pointer to a complex number a + ib represented by two doubles.
 */

void multiplication(complex c1, complex c2, complex *c3)
{
	c3->re = (c1.re * c2.re) + (c1.im * c2.im * -1);
	c3->im = (c1.re * c2.im) + (c1.im * c2.re);
}
