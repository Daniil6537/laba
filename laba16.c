#include <stdio.h>
#include <string.h>

int main() {
    char S[200], S0[100];
    scanf("%s %s", S, S0);

    char *pos = strstr(S, S0); // находим первую подстроку

    if (pos != NULL) {
        int lenS0 = strlen(S0);
        // сдвигаем оставшуюся часть строки влево
        memmove(pos, pos + lenS0, strlen(pos + lenS0) + 1);
    }

    printf("%s\n", S);

    return 0;
}
