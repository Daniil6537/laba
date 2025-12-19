#include <stdio.h>

int main() {
    char file1[100], file2[100];
    scanf("%s %s", file1, file2);

    FILE *f1 = fopen(file1, "r");
    if (f1 == NULL) {
        printf("Ошибка открытия первого файла\n");
        return 1;
    }

    double num, first, last;
    
    // Считываем первый элемент
    if (fscanf(f1, "%lf", &first) != 1) {
        printf("Файл пуст\n");
        fclose(f1);
        return 1;
    }

    last = first; // если файл один элемент, last = first

    // Считываем остальные элементы
    while (fscanf(f1, "%lf", &num) == 1) {
        last = num;
    }

    fclose(f1);

    // Создаем второй файл и записываем в него first и last
    FILE *f2 = fopen(file2, "w");
    if (f2 == NULL) {
        printf("Ошибка создания второго файла\n");
        return 1;
    }

    fprintf(f2, "%lf %lf\n", first, last);
    fclose(f2);

    return 0;
}
