#include <stdio.h>

void soma()
{
    float n1, n2;
    char inicio;
    printf("Digite 2 numeros: \n");
    scanf("%f %f", &n1, &n2);
    printf("O resultado da soma e: %.2f\n", n1 + n2);
}
void operacao2(char *operacao)
{
    printf("\nEscolha uma das opcoes: \n");
    printf("+  ----> Somar 2 numeros\n");
    printf("-  ----> Subtrair 2 numeros\n");
    printf("/  ----> Dividir 2 numeros\n");
    printf("*  ----> Multiplicar 2 numeros\n");
    printf("a  ----> Calcular a area de um circulo\n");
    printf("m  ----> Calcular a media entre 4 notas\n");
    printf("p  ----> Teste par ou impar\n");
    printf("t  ----> Imprimir a tabuada\n");
    printf("Para sair pressione [ESC]\n");
    scanf("%c", &operacao);
}
float n1, n2;
float somar;
char inicio = 'n';
char operacao;

int main()
{

    operacao2(&operacao);

    switch (operacao)
    {
    case '+':
        soma(&n1, &n2);
        break;

    default:
        break;
    }

    while (1)
    {
        printf("\nVoce deseja voltar ao inicio? (S/N)\n");

        char ini = getch();

        if (ini == 'n')
        {
            break;
        }
        if (ini == 's')
        {
            operacao2(operacao);

            switch (operacao)
            {
            case '+':
                soma(&n1, &n2);
                break;

            default:
                break;
            }
        }
    }
    return 0;
}
