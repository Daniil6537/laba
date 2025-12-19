#include <stdio.h>

int main() {
    int D, M;
    scanf("%d %d", &D, &M);

    int daysInMonth;

    if (M == 2)
        daysInMonth = 28;
    else if (M == 4 || M == 6 || M == 9 || M == 11)
        daysInMonth = 30;
    else
        daysInMonth = 31;

    if (D < daysInMonth) {
        D++;
    } else {
        D = 1;
        M++;
        if (M > 12)
            M = 1;
    }

    printf("%d %d\n", D, M);

    return 0;
}
