#include <stdio.h>

int main(void){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 16){
        printf("Pode votar");
    }
    else{
        printf("Nao pode votar");
    }

    return 0;
}