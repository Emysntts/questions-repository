#include <stdio.h>

int length_of_string(char *str){
    int i;

    for(i = 0; str[i] != '\0'; i++);

    return i;
}

void remove_new_line(char *str, int length){
    if (str[length - 1] == '\n')
        str[length - 1] = '\0';
}

int main(void){
    int t, count[26], i, index, distint_count;
    char phase[1002];

    scanf("%d%*c", &t);
    while(t--){
        fgets(phase, 1002, stdin);
        remove_new_line(phase, length_of_string(phase));
        
        for(i = 0; i < 26; i++){
            count[i] = 0;
        }

        for(i = 0; phase[i] != '\0'; i++){
            if (phase[i] >= 'a' && phase[i] <= 'z'){
                index = phase[i] - 'a';
                count[index]++;  
            }
        }

        distint_count = 0; 
        for(i = 0; i < 26; i++){
            if (count[i] > 0)
                distint_count++;
        }

        if (distint_count == 26){
            printf("frase completa\n");
        }else if (distint_count >= 13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}
