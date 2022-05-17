#include <stdio.h>

    int idade;
    int InfantilA = 'Infantil A';
    int InfantilB = 'Infantil B';
    int JuvenilA = 'Juvenil A';
    int JuvenilB = 'Juvenil B';
    int Senior = 'Senior';

int main(void){

    printf("Digite sua idade: ");
    scanf("%d", idade);

    if (idade >= 5 && idade >= 7)
    {
        printf("Voce e um nadador: Infantil A");
    }
    else if (idade >= 8 && idade <= 10)
    {
        printf("Voce e um nadador: Infantil B");
    }
    if (idade >= 11 && idade >= 13)
    {
        printf("Voce e um nadador: Juvenil A");
    }
    else if (idade >= 14 && idade >= 17)
    {
        printf("Voce e um nadador: Juvenil B");
    }
    if (idade >= 18 && idade >= 25)
    {
        printf("Voce e um nadador: Senior");
    }
    return 0;
}