#include <stdio.h>

int Quarter(double x, double y) {
    if (x > 0 && y > 0)
        return 1;
    else if (x < 0 && y > 0)
        return 2;
    else if (x < 0 && y < 0)
        return 3;
    else
        return 4; // x > 0 && y < 0
}

int main() {
    double x, y;

    // Для трех точек
    for (int i = 0; i < 3; i++) {
        scanf("%lf %lf", &x, &y);
        printf("%d\n", Quarter(x, y));
    }

    return 0;
}
