#include <stdio.h>

// Declaração e definição de uma função 
// Sem retorno e sem parametro,
// chamada saudacao.
void saudacao() {
    printf("Ola Kaue\n");
    printf("Seja bem vindo ao SENAI\n");
}
// Declaração e definição de uma função 
// Sem retorno e com um parametro,
// chamada saudacao2.
void saudacao2(char *nome) {
    printf("Ola %s\n", nome);
    printf("Seja bem vindo ao SENAI\n");
}
void soma(int num1, int num2){

    printf("O resultado da soma e: %d\n", num1 + num2);
}
int main(void){

    soma(5,8);
    saudacao();
    saudacao2("lindo");
}