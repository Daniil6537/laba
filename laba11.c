#include <stdio.h>

// Процедура удаления всех элементов, равных X
void RemoveX(int A[], int *N, int X) {
    int newSize = 0;
    for (int i = 0; i < *N; i++) {
        if (A[i] != X) {
            A[newSize++] = A[i];
        }
    }
    *N = newSize;
}

int main() {
    int Na, Nb, Nc;
    int XA, XB, XC;

    // Ввод массивов и чисел для удаления
    scanf("%d %d", &Na, &XA);
    int A[Na];
    for (int i = 0; i < Na; i++) scanf("%d", &A[i]);

    scanf("%d %d", &Nb, &XB);
    int B[Nb];
    for (int i = 0; i < Nb; i++) scanf("%d", &B[i]);

    scanf("%d %d", &Nc, &XC);
    int C[Nc];
    for (int i = 0; i < Nc; i++) scanf("%d", &C[i]);

    // Удаляем элементы
    RemoveX(A, &Na, XA);
    RemoveX(B, &Nb, XB);
    RemoveX(C, &Nc, XC);

    // Вывод результатов
    printf("%d ", Na);
    for (int i = 0; i < Na; i++) printf("%d ", A[i]);
    printf("\n");

    printf("%d ", Nb);
    for (int i = 0; i < Nb; i++) printf("%d ", B[i]);
    printf("\n");

    printf("%d ", Nc);
    for (int i = 0; i < Nc; i++) printf("%d ", C[i]);
    printf("\n");

    return 0;
}
