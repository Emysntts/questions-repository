#include <stdio.h>

int count_min_ultrapassagens(int grid_largada[], int grid_chegada[], int n) {
    int i, ultrapassagens = 0;

    int pos_chegada[25];
    for (i = 0; i < n; i++) {
        pos_chegada[grid_chegada[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pos_chegada[grid_largada[i]] > pos_chegada[grid_largada[j]]) {
                ultrapassagens++;
            }
        }
    }

    return ultrapassagens;
}

int main() {
    int n, resultado;

    while (scanf("%d", &n) && n != 0) {
        int grid_largada[25], grid_chegada[25];

        for (int i = 0; i < n; i++) {
            scanf("%d", &grid_largada[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &grid_chegada[i]);
        }

        resultado = count_min_ultrapassagens(grid_largada, grid_chegada, n);
        printf("%d\n", resultado);
    }

    return 0;
}
