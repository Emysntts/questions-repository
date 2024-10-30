#include <stdio.h>
#include <string.h>

int isCaptured(char captured[][1001], char name[], int n) {
    for (int i = 0; i < n; i++) {

        if (strcmp(captured[i], name) == 0) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int N; 
    char name[1001]; 
    char captured[1000][1001]; 
    int capturedTypes = 0; 


    scanf("%d", &N); 


    for (int i = 0; i < N; i++) {
        scanf("%s", name); 

        if (!isCaptured(captured, name, capturedTypes)) {

            strcpy(captured[capturedTypes], name);  
            capturedTypes++; 
        }
    }


    int missing = 151 - capturedTypes;
    

    printf("Missing %d pomekon(s).\n", missing);

    return 0;
}
