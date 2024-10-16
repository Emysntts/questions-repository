#include <stdio.h>

 
int main() {
    int ar[10], i, V;

    scanf("%d", &V);
    printf("N[0] = %d\n", V);

    for(i = 1; i < 10; i++){
        printf("N[%d] = %d\n", i, V*2);
        V = V*2;
    }

    return 0;
}