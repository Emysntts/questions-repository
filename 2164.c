#include <stdio.h>
#include <math.h>

double Fibonacci(int n){
    double binet;
    binet = (pow(((1 + sqrt(5))/2.0), n) - pow(((1 - sqrt(5))/2.0), n))/sqrt(5);

    return binet;
}
 
int main() {
 
    int n;

    scanf("%d", &n);

    printf("%.1lf\n", Fibonacci(n));
 
    return 0;
}