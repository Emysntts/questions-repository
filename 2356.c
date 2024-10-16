#include <stdio.h>
#include <string.h>

int main(void){
    char bacteria[100];
    char resistente[] = "ACGT";

    scanf("%s", bacteria);

    if(strstr(bacteria, resistente)){
        printf("Resistente\n");
    }else{
        printf("Nao resistente\n");
    }

    return 0;
}