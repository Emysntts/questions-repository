#include <stdio.h>

int main(void){

    int counter, coelho, rato, sapo, n, i;
    float percentualC, percentualR, percentualS, cobaias;
    char animal;

    coelho = sapo = rato = 0;

    scanf("%d", &counter);

    for(i = 1; i <= counter; i++){
        scanf("%d %c", &n, &animal);

        cobaias = cobaias + (n*1.0); 

        if(animal == 'C'){
            coelho = coelho + n;
        }else if(animal == 'R'){
            rato = rato + n;
        }else if(animal == 'S'){
            sapo =  sapo + n;
        }
    }

    printf("Total: %.0f cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);

    percentualC = ((coelho*1.0)/cobaias)*100;
    percentualR = ((rato*1.0)/cobaias)*100;
    percentualS = ((sapo*1.0)/cobaias)*100;


    printf("Percentual de coelhos: %.2f %%\n", percentualC);
    printf("Percentual de ratos: %.2f %%\n", percentualR);
    printf("Percentual de sapos: %.2f %%\n", percentualS);


    return 0;
}