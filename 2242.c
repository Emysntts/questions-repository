#include <stdio.h>
#include <string.h>

int EhVogal(char c){

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return 1;
    
    return 0;
}

void remove_new_line(char *str, int length){
    if (str[length - 1] == '\n')
        str[length - 1] = '\0';
}

int main(void){
    int i, j, engracada = 1;
    char risada[51];

    scanf("%s", risada);

    remove_new_line(risada, strlen(risada));

    j = strlen(risada) - 1;
    i = 0;

    while (i < j){
        while(!EhVogal(risada[i]) && i < strlen(risada)){
            i++;
        }  
        while (!EhVogal(risada[j] != risada[j]) && j >= 0){
            j--;
        }
        
        if(risada[i] != risada[j]){
            engracada = 0;
            break;;
        }
    }
    
    if(engracada){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}