#include "holberton.h"

/**
 * substraction - Performs the substraction operation to complex numbers.
 * @c1: Complex number a + ib represented by two doubles.
 * @c2: Complex number a + ib represented by two doubles.
 * @c3: Pointer to a complex number a + ib represented by two doubles.
 */

void substraction(complex c1, complex c2, complex *c3)
{
	c3->re = c1.re - c2.re;
	c3->im = c1.im - c2.im;
}
