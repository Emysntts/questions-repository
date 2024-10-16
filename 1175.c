#include <stdio.h>
 
int main() {
    int N[5], i, valor;

    for(i = 0; i < 5; i++){
        scanf("%d", &valor);
        N[i] = valor;
    }
    printf("N[0] = %d\n", N[4]);

    for(i = 1; i < 5; i++){
        printf("N[%d] = %d\n", i, N[4 - i]);
    }
    
    return 0;
}