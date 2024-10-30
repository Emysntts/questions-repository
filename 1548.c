#include <stdio.h>

int main(void){
    int N, M, i, rodadas = 0;
    int aux, j;
    
    scanf("%d", &N);
    
    while(rodadas < N){
    
        scanf("%d", &M);

        int ar[M];
        int ar_ordenado[M];

        for(i = 0; i < M; i++){
            scanf("%d", &ar[i]);
            ar_ordenado[i] = ar[i];
        }

        for (i = 0; i < M - 1; i++) { 
            for (j = 0; j < M - i - 1; j++) {
                if (ar[j] > ar[j + 1]) {
                    aux = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = aux;
                }
            }
        }
        
        int troca = 0;
        for (i = 0; i < M; i++) {
            if (ar[i] != ar_ordenado[i]) 
                troca++;
        }
        printf("%d\n", troca);
        rodadas++;
    }

    return 0;
}