#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    if (N < 2) {
        printf("0\n");
        return 0;
    }

    int d = a[1] - a[0];

    for (int i = 2; i < N; i++) {
        if (a[i] - a[i - 1] != d) {
            printf("0\n");
            return 0;
        }
    }

    printf("%d\n", d);

    return 0;
}
