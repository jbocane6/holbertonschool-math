#include "holberton.h"

/**
 * argument - Returns the argument of a given complex number.
 * @c: Complex number a + ib represented by two doubles.
 * Return: Argument of complex number.
 */

double argument(complex c)
{
	if (c.re == 0)
		return (0);
	else
		return (atan(c.im / c.re));
}
