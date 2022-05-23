#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("\nSeu Nome e: %s", nome);
    return 0;
}