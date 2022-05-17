#include <stdio.h>

int main(void){

    float horas;
    float nivel;
    float nivel1 = 12;
    float nivel2 = 17;
    float nivel3 = 25;

    printf("Digite o seu nivel de professor (1,2,3): ");
    scanf("%f", &nivel);

    printf("Digite a sua quantidade de horas trabalhadas: ");
    scanf("%f", &horas);

if(nivel == 1){
    nivel = nivel1*horas;
    printf("Seu salario no final do mes sera de: %.2f", nivel);
}
else if(nivel == 2){
    nivel = nivel2*horas;
    printf("Seu salario no final do mes sera de: %.2f", nivel);
}
if(nivel == 3){
    nivel = nivel3*horas;
    printf("Seu salario no final do mes sera de: %.2f", nivel);
}
    return 0;
}




