#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int K = 0;

    while ((K + 1) * (K + 1) <= N) {
        K++;
    }

    printf("%d\n", K);

    return 0;
}
