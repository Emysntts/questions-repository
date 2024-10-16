#include <stdio.h>

int main(){
	int N, num, numA, numB, i;
	scanf("%d", &N);
	numA = 0; numB = 1; i = 0;
	while(i < N){
	    printf("%d \n", numA);
	    num = numA + numB;
	    numB = numA;
	    numA = num;
	    i++;
	 }
}