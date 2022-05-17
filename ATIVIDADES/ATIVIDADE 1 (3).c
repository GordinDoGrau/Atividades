#include <stdio.h>
#include <math.h>

    int nota1;
    int nota2;
    int nota3;
    int nota4;

int main(void){
    printf("Insira a primeira nota: ");
    scanf("%d", &nota1);
    printf("Insira a segunda nota: ");
    scanf("%d", &nota2);
    printf("Insira a terceira nota: ");
    scanf("%d", &nota3);
    printf("Insira a quarta nota: ");
    scanf("%d", &nota4);

    int media = (nota1+nota2+nota3+nota4)/4;

    printf("O valor da sua media e: %d",media);
}