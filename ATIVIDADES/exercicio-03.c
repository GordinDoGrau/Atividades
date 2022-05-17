#include <stdio.h>

float n1,n2;
char op;
float res;

int main(){

    printf("Informe um numero real: \n");
    scanf("%f",&n1);

    printf("Informe um numero real: \n");
    scanf("%f",&n2);

    printf("Digite uma das 4 operacoes matematicas basicas: (+,-,/,*)\n");
    op = getch();

    switch(op){

        case '+':
            printf("Voce escolheu a operacao soma!\n");
            res = n1+n2;
            printf("O resultado e: %.2f",res);
        break;

        case '-':
            printf("Voce escolheu a operacao de subtracao!\n");
            res = n1-n2;
            printf("O resultado e: %.2f",res);
        break;
        
        case '/':
            printf("Voce escolheu a operacao de divisao!\n");
            res = n1/n2;
            printf("O resultado e: %.2f",res);
        break;

        case '*':
            printf("Voce escolheu a operacao de multiplicacao!\n");
            res = n1*n2;
            printf("O resultado e: %.2f",res);
        break;
    }
    

}