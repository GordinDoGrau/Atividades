#include <stdio.h>

int main(void){

int idade;
float altura;

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite sua altura: ");
scanf("%f", &altura);

if ((idade >= 16) && (altura >= 1.75))
{
    printf("Pode competir!");
}
else
{
    printf("Nao pode competir!");
}
return 0;
}