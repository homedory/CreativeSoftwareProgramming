#include <stdio.h>

void square(double* pd) {
    *pd = (*pd) * (*pd);
}

int main() {
    double n;
    scanf("%lf", &n);
    square(&n);
    printf("%lf\n", n);

    return 0;
}
