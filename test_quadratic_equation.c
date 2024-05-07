#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "quadratic_equation.h"

void test_solve_equation() {
    ComplexNumber* roots;

    roots = solve_equation(1, -3, 2);
    if (!(roots[0].real == 2.0 && roots[1].real == 1.0 && roots[0].imaginary == 0 && roots[1].imaginary == 0)) {
        fprintf(stderr, "Ошибка в тесте 1: дискриминант больше 0\n");
        printf("%f", roots[1].real);
        return;
    }
    free(roots);

    roots = solve_equation(1, -2, 9);
    if (!(roots[0].real == 1.0 && roots[1].real == 1.0 && roots[0].imaginary == 2 * sqrt(2) && roots[1].imaginary == -2 * sqrt(2))) {
        fprintf(stderr, "Ошибка в тесте 2: дискриминант меньше 0\n");
        printf("%f %f", roots[0].real, roots[0].imaginary);
        return;
    }
    free(roots);

    roots = solve_equation(1, -6, 9);
    if (!(roots[0].real == 3.0 && roots[1].real == 3.0 && roots[0].imaginary == 0 && roots[1].imaginary == 0)) {
        fprintf(stderr, "Ошибка в тесте 3: дискриминант равен 0\n");
        printf("%f %f", roots[0].real, roots[0].imaginary);
        return;
    }
    free(roots);

    fprintf(stderr, "Тесты пройдены успешно!");
}

int main() {
    test_solve_equation();
    return 0;
}
