#include <stdio.h>

int main(void){

    int round, score_mary, score_john, counter, head_tail;

    counter = 0;
    
    while(1){

        scanf("%d", &round);

        if (round == 0){
            break;
        }
    
        while (counter < round){
            scanf("%d", &head_tail);
            if(head_tail == 0){
                score_mary++;
            }else if(head_tail == 1){
                score_john++;
            }
            counter++;
        }
        printf("Mary won %d times and John won %d times\n", score_mary, score_john);
        counter = 0;
        score_john = score_mary = 0;

    }    


    return 0;
}