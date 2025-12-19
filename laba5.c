#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    long long sum = 0;

    for (int i = N; i <= 2 * N; i++) {
        sum += (long long)i * i;
    }

    printf("%lld\n", sum);

    return 0;
}
