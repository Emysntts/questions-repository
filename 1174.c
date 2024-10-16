#include <stdio.h>

int main(void){

    int A[100], i;
    float valor;

    for(i = 0; i < 100; i++){
        scanf("%f", &valor);
        A[i] = valor;
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, valor);
        }
    }

    return 0;
}