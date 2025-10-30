#include <stdio.h>

int main() {
    double arr[10];
    double sum = 0.0;
    
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }
    
    double average = sum / 10.0;
    printf("%.2f\n", average);
    
    return 0;
}
