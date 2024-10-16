#include <stdio.h>
#include <string.h>
 
int main() {
    int casos;
    char escolha[50];
    char *parte1, *parte2;

    scanf("%d", &casos);
    getchar(); 

    for(int i = 0; i < casos; i++) {
        fgets(escolha, sizeof(escolha), stdin);
        escolha[strcspn(escolha, "\n")] = '\0'; 

        parte1 = strtok(escolha, " ");
        parte2 = strtok(NULL, " ");

        if (strcmp(parte1, "tesoura") == 0 && strcmp(parte2, "papel") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, parte2) == 0)
            printf("Caso #%d: De novo!\n", i + 1);
        else if (strcmp(parte1, "papel") == 0 && strcmp(parte2, "pedra") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "pedra") == 0 && strcmp(parte2, "lagarto") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "lagarto") == 0 && strcmp(parte2, "Spock") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "Spock") == 0 && strcmp(parte2, "tesoura") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "tesoura") == 0 && strcmp(parte2, "lagarto") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "lagarto") == 0 && strcmp(parte2, "papel") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "papel") == 0 && strcmp(parte2, "Spock") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "Spock") == 0 && strcmp(parte2, "pedra") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else if (strcmp(parte1, "pedra") == 0 && strcmp(parte2, "tesoura") == 0)
            printf("Caso #%d: Bazinga!\n", i + 1);
        else
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
    }
    
    return 0;
}
