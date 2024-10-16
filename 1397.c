#include <stdio.h>

int main(void){

    int player1, score1, score2, player2, counter, round;
    

    score1 = score2 = 0;
    counter = 0;

    while(1){
        scanf("%d", &round);
        if (round <= 0){
            break;
        }

        while (counter < round){

            counter++;

            scanf("%d %d", &player1, &player2);
            if(player1 > player2){
                score1++;
            }else if(player2 > player1){
                score2++;
            }
        }
        printf("%d %d\n", score1, score2);

        counter = round = 0;
        score1 = player1= 0;
        score2 = player2 = 0;
    }

    return 0;
}