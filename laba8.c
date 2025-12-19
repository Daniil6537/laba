#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int a[M][N];

    // Ввод матрицы
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int minOfMax;

    for (int j = 0; j < N; j++) {
        int maxInCol = a[0][j];
        for (int i = 1; i < M; i++) {
            if (a[i][j] > maxInCol) {
                maxInCol = a[i][j];
            }
        }

        if (j == 0 || maxInCol < minOfMax) {
            minOfMax = maxInCol;
        }
    }

    printf("%d\n", minOfMax);

    return 0;
}
