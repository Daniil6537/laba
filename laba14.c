#include <stdio.h>
#include <stdlib.h>

int main() {
    char file1[100], file2[100];
    scanf("%s %s", file1, file2);

    // Открываем второй файл для чтения
    FILE *f2 = fopen(file2, "r");
    if (!f2) {
        printf("Ошибка открытия второго файла\n");
        return 1;
    }

    // Определяем размер второго файла
    fseek(f2, 0, SEEK_END);
    long size2 = ftell(f2);
    fseek(f2, 0, SEEK_SET);

    // Считываем содержимое второго файла
    char *buffer2 = (char *)malloc(size2 + 1);
    if (!buffer2) {
        printf("Ошибка выделения памяти\n");
        fclose(f2);
        return 1;
    }
    fread(buffer2, 1, size2, f2);
    buffer2[size2] = '\0';
    fclose(f2);

    // Открываем первый файл для чтения
    FILE *f1 = fopen(file1, "r");
    if (!f1) {
        printf("Ошибка открытия первого файла\n");
        free(buffer2);
        return 1;
    }

    // Определяем размер первого файла
    fseek(f1, 0, SEEK_END);
    long size1 = ftell(f1);
    fseek(f1, 0, SEEK_SET);

    // Считываем содержимое первого файла
    char *buffer1 = (char *)malloc(size1 + 1);
    if (!buffer1) {
        printf("Ошибка выделения памяти\n");
        fclose(f1);
        free(buffer2);
        return 1;
    }
    fread(buffer1, 1, size1, f1);
    buffer1[size1] = '\0';
    fclose(f1);

    // Открываем первый файл для записи (перезапись)
    f1 = fopen(file1, "w");
    if (!f1) {
        printf("Ошибка открытия первого файла для записи\n");
        free(buffer1);
        free(buffer2);
        return 1;
    }

    // Записываем сначала содержимое второго файла, потом первого
    fwrite(buffer2, 1, size2, f1);
    fwrite(buffer1, 1, size1, f1);

    fclose(f1);
    free(buffer1);
    free(buffer2);

    return 0;
}
