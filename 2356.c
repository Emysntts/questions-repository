#include <stdio.h>
#include <string.h>

int main(void) {
    char bacteria[100];
    char resistant[] = "ACGT";

    scanf("%s", bacteria);

    int is_resistant = 0;

    for (int i = 0; i < strlen(bacteria); i++) {
        for (int j = 0; j < strlen(resistant); j++) {
            if (bacteria[i] == resistant[j]) {
                is_resistant = 1;
                break;
            }
        }
        if (is_resistant) {
            break;
        }
    }

    if (is_resistant) {
        printf("Resistente\n");
    } else {
        printf("Nao resistente\n");
    }

    return 0;
}
