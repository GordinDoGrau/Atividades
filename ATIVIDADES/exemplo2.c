#include <stdio.h>

int main (void){

   int contador = 0;

   int vetor[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

       printf("Vetor na ordem normal \n");

   for(contador; contador <= 10; contador++){

       printf(" [%.1d] ",vetor[contador]);

   }

       printf("Vetor na ordem inversa \n");

   for(contador; contador >= 0; contador--){

       printf(" [%.1d] ",vetor[contador]);

   }

   return 0;

}