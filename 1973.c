#include <stdio.h>

int main(void) {
    int N;
    
    scanf("%d", &N);
    
    int carneiros[N];
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &carneiros[i]);
    }

    int atacados = 0; 
    int index = 0;    

    while (index >= 0 && index < N) {

        if (carneiros[index] > 0) {
            carneiros[index]--;
            atacados++;
        }
        
        if (carneiros[index] % 2 == 0) {
            index--; 
        } else {
            index++; 
        }
    }
    
    int carneiros_restantes = 0;
    for (int i = 0; i < N; i++) {
        carneiros_restantes += carneiros[i];
    }
    
    printf("%d %d\n", atacados, carneiros_restantes);
    
    return 0;
}
