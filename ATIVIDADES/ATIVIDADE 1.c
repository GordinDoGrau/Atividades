#include <stdio.h>

    float num1;
    int num2;

int main(void){

    printf("Digite um numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite um numero real: ");
    scanf("%f", &num1);

    printf("O numero real e: %0.3f e o inteiro e: %04d", num1, num2);

    return(0);
}