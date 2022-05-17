#include <stdio.h>

#define VETOR 20

int adivinhacao[VETOR];
int pontuacao = 0;
int valor;
int final;

int main()
{
do
{
    printf("\nDigite um numero entre 1 a 30\n");
    scanf("%d", &valor);
    for (int n = 0; n < VETOR; n++)
    {
        adivinhacao[n] = rand() % 30;
    }
        switch (valor)
        {
            
    // Indices faltando pois alguns repetem
    // Não consegui apenas fazer a pontuação
    // Help-me pls!!!

        case 11:
            printf("\n\nNumero adivinhado! Indice: 1\n\n");
            pontuacao++;
            break;
        case 17:
            printf("\n\nNumero adivinhado! Indice: 2\n\n");
            pontuacao++;
            break;
        case 4:
            printf("\n\nNumero adivinhado! Indice: 3\n\n");
            pontuacao++;
            break;
        case 10:
            printf("\n\nNumero adivinhado! Indice: 4\n\n");
            pontuacao++;
            break;
        case 29:
            printf("\n\nNumero adivinhado! Indice: 5\n\n");
            pontuacao++;
            break;
        case 18:
            printf("\n\nNumero adivinhado! Indice: 7\n\n");
            pontuacao++;
            break;
        case 22:
            printf("\n\nNumero adivinhado! Indice: 9\n\n");
            pontuacao++;
            break;
        case 14:
            printf("\n\nNumero adivinhado! Indice: 10\n\n");
            pontuacao++;
            break;
        case 5:
            printf("\n\nNumero adivinhado! Indice: 11\n\n");
            pontuacao++;
            break;
        case 1:
            printf("\n\nNumero adivinhado! Indice: 13\n\n");
            pontuacao++;
            break;
        case 27:
            printf("\n\nNumero adivinhado! Indice: 14\n\n");
            pontuacao++;
            break;
        case 25:
            printf("\n\nNumero adivinhado! Indice: 17\n\n");
            pontuacao++;
            break;
        case 2:
            printf("\n\nNumero adivinhado! Indice: 18\n\n");
            pontuacao++;
            break;
        case 6:
            printf("\n\nNumero adivinhado! Indice: 20\n\n");
            pontuacao++;
            break;
            
        default:
        printf("Numero nao econtrado!\n");
            break;
        }
} while (valor > 0);{
    printf("Pontuacao total: %d", pontuacao);
}
    return 0;
}
