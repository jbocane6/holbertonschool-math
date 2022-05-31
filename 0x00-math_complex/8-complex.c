#include "holberton.h"

/**
 * complex_from_mod_arg - Update the real and the imaginary parts
 * of a complex number given its modulus and arguments.
 * @m: Complex number modulus.
 * @arg: Complex number arguments.
 * @c3: Pointer to a complex number a + ib represented by two doubles.
 */

void complex_from_mod_arg(double m, double arg, complex *c3)
{
	c3->re = m * cos(arg);
	c3->im = m * sin(arg);
}
