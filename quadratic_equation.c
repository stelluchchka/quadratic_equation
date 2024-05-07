#include "quadratic_equation.h"

ComplexNumber* solve_equation(double a, double b, double c) {
    ComplexNumber* roots = (ComplexNumber*)malloc(sizeof(ComplexNumber) * 2);
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        roots[0].real = (-b + sqrt(discriminant)) / (2 * a);
        roots[1].real = (-b - sqrt(discriminant)) / (2 * a);
        roots[0].imaginary = 0;
        roots[1].imaginary = 0;
    } else if (discriminant == 0) {
        roots[0].real = -b / (2 * a);
        roots[1].real = roots[0].real;
        roots[0].imaginary = 0;
        roots[1].imaginary = 0;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        roots[0].real = realPart;
        roots[0].imaginary = imaginaryPart;
        roots[1].real = realPart;
        roots[1].imaginary = -imaginaryPart;
    }

    return roots;
}
