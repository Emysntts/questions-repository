#include <stdio.h>

int main(void){
    int N, i, soma = 0;
    char str[101];
    int ar[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &N);

    for (i = 0; i < N; i++){
        scanf("%s", str);
        for(int j = 0; str[j] != '\0'; j++){
            int key = str[j] - 48;
            soma += ar[key];
        }
        printf("%d leds\n", soma);
        soma = 0;
    }

}