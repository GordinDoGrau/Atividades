#include <stdio.h>
#include <string.h>

    int numeros[10];

int main(){

    memset(numeros, 0, sizeof(int) * 10);

    for(int n = 0; n < 10; n++)
    {
        printf("\nDigite um numero: ");
        getch(numeros[n]);

        printf("%d",numeros[n]);
    }
    return 0;
}