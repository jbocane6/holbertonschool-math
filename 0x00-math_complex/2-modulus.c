#include "holberton.h"

/**
 * modulus - Returns the modulus of a given complex number.
 * @c: Complex number a + ib represented by two doubles.
 * Return: Modulus of complex number.
 */

double modulus(complex c)
{
	return (sqrt(pow(c.re, 2) + pow(c.im, 2)));
}
