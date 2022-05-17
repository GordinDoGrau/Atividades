#include <stdio.h>
#include <math.h>

// Relacionais:                 // Operadores lógicos:

// >: maior                     // &&: operador e (and)
// <: menor                     // ||: operador ou (or)
// >= maior igual
// <= menor igual
// == igual
// != diferente
int main(void)
{
    int n1, n2, maior;

    printf("Digite um numero inteiro\n");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro\n");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        maior = n1;
    }
    else
    {
        maior = n2;
    }
    printf("O maior numero e: %d", maior);
    return 0;
}