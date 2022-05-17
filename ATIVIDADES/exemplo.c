#include <stdio.h>
#include <string.h>


int main()
{
    int numero[10], i;
    memset(numero, 0, sizeof(int) * 10);
    for(i = 0; i < 10; i++)
    {
        printf("Digite o %d numero: \n", i);
        scanf("%d", &numero);
    }
    for(i = 0; i < 10; i++)
    {
        printf("O numero %d e %s\n",numero[i],(numero[i] % 2) ? "Impar" : "Par");

    }
    return 0;
}