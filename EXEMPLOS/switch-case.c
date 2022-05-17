#include <stdio.h>

int main(void){

    char letra;
    printf("Switch-case\n");

    printf("Digite alguma letra: ");

    letra = getch();
    
    switch (letra)
    {
    case 'a':
        printf("\nVoce pressionou a tecla A\n");
        break;
    case 'b':
        printf("\nVoce pressionou a tecla B\n");
        break;
    default:
        printf("\nVoce pressionou outra tecla\n");
        break;
    }
    return(0);
}

