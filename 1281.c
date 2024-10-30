#include <stdio.h>
#include <string.h>

int main() {
    int N; 
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int M, P; 
        scanf("%d", &M);

        char products[100][50]; 
        double prices[100]; 

        for (int j = 0; j < M; j++) {
            scanf("%s %lf", products[j], &prices[j]); 
        }

        scanf("%d", &P);

        double total_spent = 0.00; 

        for (int j = 0; j < P; j++) {
            char desired_product[50];
            int quantity;

            scanf(" %[^\n] %d", desired_product, &quantity); 
            
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
