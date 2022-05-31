#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct complex -  Is the structure of complex number.
 * @real: Real number.
 * @imaginary: imaginary number.
 */
typedef struct comp
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);

#endif