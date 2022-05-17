#include <stdio.h>
#define vitoria 3
#define empate 1

int times;
int vitorias;
int empates;
int derrotas;
int pont;
int main(void){

    printf("Digite o numero de times: ");
    scanf("%d",&times);

for(int t = 1; t <= times; t++){
    printf("Digite o numero de vitorias: \n");
    scanf("%d",&vitorias);
    printf("Digite o numero de empates: \n");
    scanf("%d", &empates);
    printf("Digite o numero de derrotas: \n");
    scanf("%d", &derrotas);

    pont = (vitorias*vitoria)+(empates*empates)+0;

    printf("A pontuacao do time %d e: %d\n",pont);
}
return 0;
}