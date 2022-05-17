#include <stdio.h>
int in;
int quadrado;
int main(void){

do{
    printf("Digite um numero inteiro: ");
    scanf("%d",&in);

    quadrado = in*in;

    printf("O quadrado deste numero e: %d\n",quadrado);

} while(in!=0);
return 0;
}