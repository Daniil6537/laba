#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = n / 10;   // десятки
    int b = n % 10;   // единицы

    int result = b * 10 + a;
    printf("%d\n", result);

    return 0;
}
