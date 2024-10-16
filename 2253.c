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

int main() {
    char senha[101];
    int i, lenght;
    int upper, lower, num, special;
    

    while (fgets(senha, 101, stdin) != NULL){

        remove_new_line(senha, length_of_string(senha));

        upper = lower = num = special = 0;

        for(i = 0; senha[i] != '\0'; i++){
            if (senha[i] >= 'A' && senha[i] <= 'Z')
                upper++;
            else if (senha[i] >= 'a' && senha[i] <= 'z')
                lower++;
            else if (senha[i] >= '0' && senha[i] <= '9')
                num++;
            else
                special++;
        }

        lenght = length_of_string(senha);
        
        if (upper > 0 && lower > 0 && num > 0 && special == 0 && lenght >= 6 && lenght <= 32)
            printf("Senha valida.\n");
        else
            printf("Senha invalida.\n");
        
    }
    
 
    return 0;
}