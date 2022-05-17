#include <stdio.h>
#include <math.h>

int num1;
int num2;

int main(void){
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int soma = num1+num2;
    int divisao = num1/num2;
    int multiplicacao = num1*num2;
    int subtracao = num1-num2;
    
    printf("A soma deste numero e: %04d\n", soma);
    printf("A subtracao deste numero e: %04d\n", subtracao);
    printf("A divisao deste numero e: %04d\n", divisao);
    printf("A multiplicacao deste numero e: %04d\n", multiplicacao);
}