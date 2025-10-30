#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    double array[10];
    int K;
    K = atoi(argv[1]);
    for(int i = 0; i < 10; i++) {
        scanf("%lf", &array[i]);
    }
    K = K % 10;
    if(K < 0) K += 10;
    for(int i = 0; i < 10; i++) {
        int index = (i - K + 10) % 10;
        printf("%.3f", array[index]); 
        if(i < 9) printf(" ");
    }
    printf("\n");
    return 0;
}
