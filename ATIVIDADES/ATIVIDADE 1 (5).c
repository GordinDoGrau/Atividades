#include <stdio.h>
#include <math.h>

    float nota1;
    float nota2;
    float nota3;
    float nota4;

int main(void){
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    printf("Insira a quarta nota: ");
    scanf("%f", &nota4);

    float media = (nota1+nota2+nota3+nota4)/4;

    printf("O valor da sua media e: %0.3f",media);
}