#include <stdio.h>

int main() {
    int N;
    char C;
    scanf("%d %c", &N, &C);

    for (int i = 0; i < N; i++) {
        putchar(C);
    }
    putchar('\n');

    return 0;
}
