#include <stdio.h>

int count_min_overtakes(int start_grid[], int finish_grid[], int n) {
    int i, overtakes = 0;

    int finish_position[25];
    for (i = 0; i < n; i++) {
        finish_position[finish_grid[i]] = i;
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (finish_position[start_grid[i]] > finish_position[start_grid[j]]) {
                overtakes++;
            }
        }
    }

    return overtakes;
}

int main() {
    int n, result;

    while (scanf("%d", &n) && n != 0) {
        int start_grid[25], finish_grid[25];

        for (int i = 0; i < n; i++) {
            scanf("%d", &start_grid[i]);
        }

        for (int i = 0; i < n; i++) {
            scanf("%d", &finish_grid[i]);
        }

        result = count_min_overtakes(start_grid, finish_grid, n);
        printf("%d\n", result);
    }

    return 0;
}
