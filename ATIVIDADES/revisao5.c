#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){
    char frase[99];
    int numero;
    float real;
    char letra;

    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);

    printf("Digite um numero inteiro: ");
    fflush(stdin);
    scanf("%d", &numero);

    printf("Digite um numero real: ");
    fflush(stdin);
    scanf("%f", &real);

    printf("Digiteu uma letra: ");
    fflush(stdin);
    scanf("%s", &letra);

    printf("\nNumero inteiro: %d", numero);
    printf("\nNumero real: %.2f", real);
    printf("\nLetra: %c", letra);
    printf("\nFrase: %s", frase);

    return 0;
}