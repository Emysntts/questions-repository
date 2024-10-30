#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char word[21];
    for (int i = 0; i < n; i++) {
        scanf("%s", word);

       
        if (strlen(word) == 3) {
            
            if (strncmp(word, "OB", 2) == 0 && word[2] != 'I') {
                strcpy(word, "OBI");
            } else if (strncmp(word, "UR", 2) == 0 && word[2] != 'I') {
                strcpy(word, "URI");
            }
        }

        
        printf("%s", word);

        
        if (i < n - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
