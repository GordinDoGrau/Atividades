#include <stdio.h>

int main(void){
int i = 0;
int dobro;
printf("Digite um numero\n");
scanf("%d",&i);
do{
    dobro=i*2;
    printf("\nO dobro do numero e: %d\n", dobro);
    printf("Digite outro numero (0 Para sair)");
    scanf("%d",&i);
} while (i!= 0);

return 0;

}
