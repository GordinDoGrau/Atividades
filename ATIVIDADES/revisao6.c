#include <stdio.h>

int n1,n2;

int main(){

    printf("Digite 2 numeros: ");
    scanf("%d %d", &n1,&n2);

    if (n1 < n2)
    {
        printf("O numero %d e menor que o numero %d",n1,n2);
    }

    if (n1 > n2)
    {
        printf("O numero %d e maior que o numero %d",n1,n2);
    }

    if (n1 == n2)
    {
        printf("Os Numeros sao iguais!",n1,n2);
    }

    if (n1 >= n2)
    {
        printf("",n1,n2);
    }
    if (n1 <= n2)
    {
        printf("",n1,n2);
    }
    
}