#include <stdio.h>
#include <string.h>

int IsVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    
    return 0;
}

void remove_new_line(char *str, int length) {
    if (str[length - 1] == '\n')
        str[length - 1] = '\0';
}

int main(void) {
    int i, j, funny = 1;
    char laugh[51];

    scanf("%s", laugh);

    remove_new_line(laugh, strlen(laugh));

    j = strlen(laugh) - 1;
    i = 0;

    while (i < j) {
        while(!IsVowel(laugh[i]) && i < strlen(laugh)) {
            i++;
        }  
        while (!IsVowel(laugh[j]) && j >= 0) {
            j--;
        }
        
        if(laugh[i] != laugh[j]) {
            funny = 0;
            break;
        }
    }
    
    if(funny) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
