#include <stdio.h>

int main(void){

    int num1;

    printf("Informe o valor de num1: ");
    // Le a informação que o usuario fornece no printf (leia do portugol)
    // usa os mesmo coringas para ler
    // o & (e comercial) indica que iremos gravar o valor da leitura,
    // no endereço de memoria da variavel a seguir (num1)
    scanf("%d", &num1);
    printf("O valor de num1 e: %d\n", num1);

    return(0);
}