#include <stdio.h>
#include <string.h>

// Функция поиска подстроки S0 в строке S, начиная с K-го символа и не далее N символов
int PosSub(const char *S0, const char *S, int K, int N) {
    int lenS = strlen(S);
    int lenS0 = strlen(S0);

    if (K > lenS) return 0;

    int start = K - 1; // преобразуем к индексу массива
    int end = start + N;
    if (end > lenS) end = lenS;

    for (int i = start; i <= end - lenS0; i++) {
        int match = 1;
        for (int j = 0; j < lenS0; j++) {
            if (S[i + j] != S0[j]) {
                match = 0;
                break;
            }
        }
        if (match) return i + 1; // возвращаем позицию в стиле 1-based
    }

    return 0;
}

int main() {
    char S0[100], S[100];
    scanf("%s %s", S0, S);

    int K1, N1, K2, N2, K3, N3;
    scanf("%d %d %d %d %d %d", &K1, &N1, &K2, &N2, &K3, &N3);

    printf("%d\n", PosSub(S0, S, K1, N1));
    printf("%d\n", PosSub(S0, S, K2, N2));
    printf("%d\n", PosSub(S0, S, K3, N3));

    return 0;
}
