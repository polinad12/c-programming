#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]) {
    int array[10];
    int X;
    int K;
    X = atof(argv[1]);
    K = atoi(argv[2]);
    for(int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }
    for(int i = 9; i > K; i--) {
        array[i] = array[i-1];
    }
    array[K] = X;
    for(int i = 0; i < 10; i++) {
        printf("%.d", array[i]);  
        if(i < 9) printf(" ");
    }
    printf("\n");
    return 0;
}
