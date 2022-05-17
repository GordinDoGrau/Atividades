#include <stdio.h>
#define num 17

int main(void){

int menor = -99999999999999999;
int maior = 99999999999999999;
for(int t;t<=num;t++){
    printf("Digite o numero: ");
    scanf("%d",&t); 
}
for(int t = 0; t < num; t++){
    if(t < menor){
        menor = t;
    }
    if(t < maior){
        maior = t;
    }
    printf("O maior numero e: %d\n", maior);
    printf("O menor numero e: %d\n", menor);
}
return 0;
}