#include <stdio.h>

int main(void)
{
    float n1, n2, n3, media;

    printf("Digite 3 notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    if (media >= 7)
    {
        printf("Aluno Aprovado!");
    }
    else if (media <= 4)
    {
        printf("Aluno Reprovado!");
    }
    if ((media > 4) && (media < 7 ));
        {
            printf("Aluno em exame!");
        }
}
