#include <stdio.h>

void AddRightDigit(int D, int *K) {
    *K = (*K) * 10 + D;
}

int main() {
    int K, D1, D2;

    scanf("%d %d %d", &K, &D1, &D2);

    AddRightDigit(D1, &K);
    printf("%d\n", K);

    AddRightDigit(D2, &K);
    printf("%d\n", K);

    return 0;
}
