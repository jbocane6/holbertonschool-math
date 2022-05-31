#include "holberton.h"

/**
 * division - Performs the division operation to complex numbers.
 * @c1: Complex number a + ib represented by two doubles.
 * @c2: Complex number a + ib represented by two doubles.
 * @c3: Pointer to a complex number a + ib represented by two doubles.
 */

void division(complex c1, complex c2, complex *c3)
{
	complex conj = c2, num = c1;
	double den = 0;

	conj.im *= -1;
	num.re = (c1.re * conj.re) + (c1.im * conj.im * -1);
	num.im = (c1.re * conj.im) + (c1.im * conj.re);
	den = (c2.re * conj.re) + (c2.im * conj.im * -1);
	c3->re = num.re / den;
	c3->im = num.im / den;
}
