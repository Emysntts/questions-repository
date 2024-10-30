#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100
#define MAX_NAME_LENGTH 50

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {
        int M;
        scanf("%d", &M);
        getchar();

        char products[MAX_PRODUCTS][MAX_NAME_LENGTH];
        double prices[MAX_PRODUCTS];

        for (int j = 0; j < M; j++) {
            fgets(products[j], MAX_NAME_LENGTH, stdin);
            products[j][strcspn(products[j], "\n")] = '\0';
            scanf("%lf", &prices[j]);
            getchar();
        }

        int P;
        scanf("%d", &P);
        getchar();

        double total_spent = 0.0;

        for (int j = 0; j < P; j++) {
            char line[100];
            fgets(line, sizeof(line), stdin);
            char desired_product[MAX_NAME_LENGTH];
            int quantity;

            sscanf(line, "%[^\n] %d", desired_product, &quantity);

            for (int k = 0; k < M; k++) {
                if (strcmp(products[k], desired_product) == 0) {
                    total_spent += prices[k] * quantity;
                    break;
                }
            }
        }

        printf("R$ %.2f\n", total_spent);
    }

    return 0;
}
