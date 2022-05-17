#include <stdio.h>

float n1;
float n2;
char operacao;
float res;

int main(void)
{

    printf("Digite o primeiro numero real: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero real: ");
    scanf("%f", &n2);

    printf("Escolha uma das operacoes:\n+: Soma\n-: Subtracao\n/: Divisao\n*: Multiplicacao\n");
    getch();
    operacao = getch();
    switch (operacao)
    {
    case '+':
        res = n1 + n2;
        printf("O resultado da soma e: %f", res);
        break;
    case '-':
        res = n1 - n2;
        printf("O resultado da subtracao e: %f", res);
        break;
    case '/':
        res = n1 / n2;
        printf("O resultado da divisao e: %f", res);
        break;
    case '*':
        res = n1 * n2;
        printf("O resultado da multiplicacao e: %f", res);
        break;

    default:
        printf("Voce digitou algo diferente doque foi pedido, comece denovo teimoso");
        break;
    }
}