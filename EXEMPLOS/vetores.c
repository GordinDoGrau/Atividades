#include <stdio.h>
#include <string.h>


int main()
{

    int numeros[10];
    int vetor;

    for(int n = 0; n < 10; n++){
        numeros[n] = 0;
    }

    printf("vetor limpo!\n");

    numeros[4] = 1;
    
    for(int n = 0; n < 10; n++){
        printf("O valor no indice %d e: %d\n", n , numeros[n]);
    }
    
    
    
    
    return 0;
}
