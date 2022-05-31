#include "holberton.h"

/**
 * conjugate - Returns the conjugate of a given complex number.
 * @c: Complex number a + ib represented by two doubles.
 * Return: Conjugate complex number.
 */

complex conjugate(complex c)
{
	if (c.im == 0)
		return (c);
	c.im *= -1;
	return (c);
}
