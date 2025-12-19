#include <stdio.h>

int main() {
    double A, B;
    scanf("%lf %lf", &A, &B);

    if (A > B) {
        double temp = A;
        A = B;
        B = temp;
    }

    printf("%lf %lf\n", A, B);

    return 0;
}
