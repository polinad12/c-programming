#include <stdio.h>
#include <math.h>

int main() {
    double array[10];
    double sum = 0.0;
    
    // Чтение массива
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    
    // Вычисление среднего с повышенной точностью
    double average = sum / 10.0;
    
    // Округление до двух знаков после запятой
    average = round(average * 100) / 100;
    
    printf("%.2f\n", average);
    
    return 0;
}
