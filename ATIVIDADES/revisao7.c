#include <stdio.h>

    int n1,n2;
    int soma;
    int mult;
    int sub;
    float div;
    int mod;

int main(){

    printf("Digite 2 numeros: \n");
    scanf("%d %d", &n1,&n2);

    soma = n1+n2;
    mult = n1*n2;
    sub = n1-n2;
    div = n1/n2;
    mod = n1%n2;

    printf("\nSubtracao: %d",sub);
    printf("\nMultiplicacao: %d",mult);
    printf("\nDivisao: %.2f",div);
    printf("\nSoma: %d",soma);
    printf("\nOperador de modulo %d",mod);
    return 0;
}