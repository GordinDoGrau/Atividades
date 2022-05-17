#include <stdio.h>
#include <math.h>

float num1;
float num2;

int main(void){
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    float soma = num1 + num2;
    float divisao = num1/num2;
    float multiplicacao = num1*num2;
    float subtracao = num1-num2;
    
    printf("A soma e: %0.3f\n", soma);
    printf("A subtracao e: %0.3f\n", subtracao);
    printf("A divisao e: %0.3f\n", divisao);
    printf("A multiplicacao e: %0.3f\n", multiplicacao);
}