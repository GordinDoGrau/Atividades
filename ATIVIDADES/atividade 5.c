#include <stdio.h>
#define PI 3.14

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
void solicitar(float *a, float *b)
{
    printf("Informe um numero real: \n");
    scanf("%f", a);

    printf("Informe outro numero real: \n");
    scanf("%f", b);
}
void raio(float raio){
        printf("Informe o raio do circulo");
        scanf("%f", &raio);
        printf("O valor do raio e: %.2f\n",(raio*raio)*PI);
}

int main(void){

    char op;
    float a, b;
    
    printf("Escolha uma operacao: [ + - ; * A M\n");
    printf("+ -----> Somar 2 numeros");
    printf("- -----> Subtrair 2 numeros");
    printf("/ -----> Dividir 2 numeros");
    printf("* -----> Multiplicar 2 numeros");
    printf("A -----> Calcular Area de um circulo");
    printf("M -----> Calcular Media de 4 numeros");
    op = getch();

    switch (op)
    {
    
    case '+':
        solicitar(&a,&b);
        soma(a, b);

        break;

    case '-':
        solicitar(&a,&b);
        sub(a, b);

        break;

    case '/':
        solicitar(&a,&b);
        divisao(a, b);

        break;

    case '*':
        solicitar(&a,&b);
        multi(a, b);

        break;
    case 'M':
        float media,n1,n2,n3,n4;
        media = (n1+n2+n3+n4)/4;
        printf("O valor da media e: %.2f",&media);

        break;
    case 'A':
        raio(raio);
        break;
    case 'a':
        raio(raio2);
        break;
    default:
        printf("\nVoce digitou algo diferente doque foi pedido, comece denovo teimoso");
        break;
    }
    return 0;
}