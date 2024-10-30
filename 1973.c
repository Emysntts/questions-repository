#include <stdio.h>

int main(void) {
    int N;

    scanf("%d", &N);

    int sheep[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &sheep[i]);
    }

    int attacked = 0; 
    int index = 0;    

    while (index >= 0 && index < N) {
        if (sheep[index] > 0) {
            sheep[index]--;
            attacked++;
        }
        
        if (sheep[index] % 2 == 0) {
            index--; 
        } else {
            index++; 
        }
    }
    
    int remaining_sheep = 0;
    for (int i = 0; i < N; i++) {
        remaining_sheep += sheep[i];
    }
    
    printf("%d %d\n", attacked, remaining_sheep);
    
    return 0;
}
