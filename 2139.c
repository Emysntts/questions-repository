#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

int main() {
    int N;
    char codes[1000][5];
    
    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s", codes[i]); 
        }

        qsort(codes, N, 5 * sizeof(char), compare);

        for (int i = 0; i < N; i++) {
            printf("%s\n", codes[i]);
        }
    }

    return 0;
}
