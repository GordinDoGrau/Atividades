#include <stdio.h>
#define PI 3.14

float raio;
float area;

int main(void){
    printf("Digite o raio do seu circulo: ");
    scanf("%f", &raio);
    area = PI*(raio*raio);

    printf("A area do seu circulo e: %.2f",area);
    return 0;
}
