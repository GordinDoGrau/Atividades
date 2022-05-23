#include <stdio.h>
#include <string.h>

int main(){

    int inteiro;
    char letra;
    float real;

    printf("Digite um numero inteiro: ");
    fflush(stdin);
    scanf("%d",&inteiro);

    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c",&letra);

    printf("Digite um numero real: ");
    fflush(stdin);
    scanf("%f",&real);

    printf("\nNumero inteiro: %d\n", inteiro);
    printf("Numero Real: %.2f\n", real);
    printf("Letra: %c\n", letra);
}