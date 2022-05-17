#include <stdio.h>


void soma(float n1, float n2)
{
    printf("Voce escolheu a operacao soma!\n");
    printf("O resultado e: %.2f",n1 + n2);
}

void sub(float n1, float n2)
{
    printf("Voce escolheu a operacao de subtracao!\n");

    printf("O resultado e: %.2f",n1 - n2);
}

void divisao(float n1, float n2)
{
    printf("Voce escolheu a operacao de divisao!\n");
    printf("O resultado e: %.2f",n1 / n2);
}

void multi(float n1, float n2)
{
    printf("Voce escolheu a operacao de multiplicacao!\n");
    printf("O resultado e: %.2f",n1 * n2);
}

int main()
{

    float a, b;
    char op;
    float res;

    printf("Informe um numero real: \n");
    scanf("%f", &a);

    printf("Informe um numero real: \n");
    scanf("%f", &b);

    printf("Digite uma das 4 operacoes matematicas basicas: (+,-,/,*)\n");
    op = getch();

    switch (op)
    {

    case '+':
        soma(a, b);

        break;

    case '-':
        sub(a, b);

        break;

    case '/':
        divisao(a, b);

        break;

    case '*':
        multi(a, b);

        break;
    default:
        printf("Voce digitou algo diferente doque foi pedido, comece denovo teimoso");
        break;
    }
}