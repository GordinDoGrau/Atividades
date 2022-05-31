#include <stdio.h>

    int i;

int main(void)
{

    printf("Digite sua idade: ");
    scanf("%d", &i);

    if (i < 13)
        ;
    {
        printf("Crianca");
    }
    if (i >= 13 && i < 20)
    {
        printf("Adolescente");
    }
    if (i >= 20 && i < 65)
    {
        printf("Adulto");
    }
    if (i >= 65)
    {
        printf("Idoso");
    }
}