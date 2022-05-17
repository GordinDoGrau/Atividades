// #Include: inclui uma biblioteca no projeto.
// stdio = Standart Input Output (Entrada e Saida Padrão)
// Biblioteca sempre necessaria sempre que for ler dados do teclado,
// ou imprimir informações na tela.
#include <stdio.h>

// Função main (principal) é a função que inicia a
// execução do nosso código. Equivalente à função, inicio do portugol.
// obrigatoriamente deve possuir um retorno do tipo int (inteiro)
int main(void){

        int inteiro = 7; // Variavel do tipo inteiro
        float real = 12.45; // Variavel do tipo real
        char caractere = 'a'; // Variavel do tipo caractere
        char texto[10] = "GORDITI"; // Variavel do tipo caractere (vetor)

        // imprime uma string com a variavel do tipo inteiro (substituindo o coringa)
        // valor "05" no coringa limita a quantidade de letras/numeros ao imprimir sua variavel
        // para limitar pode usar qualquer numero apos o 0 e funciona para qualquer tipo de coringa
        printf("Ola mundo \n%05d", inteiro);

        // imprime uma string com a variavel do tipo real (substituindo o coringa)
        printf("Ola mundo \n%f", real);

        // imprime uma string com a variavel do tipo caractere (substituindo o coringa)
        printf("Ola mundo \n%c", caractere);

        // imprime uma string com uma variavel do tipo caractere com vetor (substituindo o coringa)
        // o numero no coringa adiciona espaços em branco
        printf("Ola mundo \n%s", texto);
    
    return(0);
// retorna retun (retorno), retorna um valor para quem chamou a função main()
// neste caso o sistema operacional.
// o retorno com o valor 0 significa que o programa encerrou sem nenhum erro
}