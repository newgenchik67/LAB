#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    const int students_count = 4;      // Количество учеников
    const int time_increase = 10;      // На сколько минут каждый следующий тратит больше
    int N;                             // Время первого ученика

    setlocale(LC_CTYPE, "");

    printf("Введите время (в минутах), за которое первый ученик отладил задачу: ");
    scanf("%d", &N);

    int time1 = N;                     // Время 1-го ученика
    int time2 = N + time_increase;     // Время 2-го ученика
    int time3 = N + 2 * time_increase; // Время 3-го ученика
    int time4 = N + 3 * time_increase; // Время 4-го ученика

    int total_time = time1 + time2 + time3 + time4;

    printf("\nРАСЧЕТ ОБЩЕГО КОМПЬЮТЕРНОГО ВРЕМЕНИ\n");
    printf("=====================================\n\n");
    printf("УСЛОВИЯ:\n");
    printf("- Количество учеников: %d\n", students_count);
    printf("- Первый ученик отладил задачу за: %d мин.\n", N);
    printf("- Каждый следующий тратил на %d минут больше предыдущего.\n\n", time_increase);

    printf("РАСЧЕТ ПО УЧЕНИКАМ:\n");
    printf("- Время 1-го ученика: %d мин.\n", time1);
    printf("- Время 2-го ученика: %d мин.\n", time2);
    printf("- Время 3-го ученика: %d мин.\n", time3);
    printf("- Время 4-го ученика: %d мин.\n\n", time4);

    printf("ОБЩИЙ РАСХОД КОМПЬЮТЕРНОГО ВРЕМЕНИ:\n");
    printf("%d + %d + %d + %d = %d минут.\n", time1, time2, time3, time4, total_time);
    printf("=====================================\n");
    printf("ИТОГО: %d минут компьютерного времени понадобилось 4 ученикам.\n", total_time);

    return 0;
}