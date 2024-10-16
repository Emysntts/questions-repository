 #include <stdio.h>

int main(void){

    int A,B,C,D,E, type_tea, correct_answer;

    scanf("%d", &type_tea);

    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

   if (type_tea == A){
    correct_answer++;
   }
   if (type_tea == B){
    correct_answer++;
   }
   if(type_tea == C){
    correct_answer++;
   }
   if(type_tea == D){
    correct_answer++;
   }
   if(type_tea == E){
    correct_answer++;
   }

   printf("%d\n", correct_answer);

    return 0;
}
