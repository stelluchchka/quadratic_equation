#ifndef QUADRATIC_EQUATION_H
#define QUADRATIC_EQUATION_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    double real;
    double imaginary;
} ComplexNumber;

ComplexNumber* solve_equation(double a, double b, double c);

#endif // QUADRATIC_EQUATION_H
