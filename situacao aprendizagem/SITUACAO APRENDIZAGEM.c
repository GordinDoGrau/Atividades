#include <stdio.h>

// Menu para adicionar elementos e lista-los

typedef struct
{
    int codigo_p;
    char descricao[100];
    float valor;
}Produto;
typedef struct
{
    char cnpj[14];
    int codigo_p;
    int quantidade;
}Estoque;
typedef struct
{
    char cnpj[14];
    char nome[99];
    char segmento[200];
}Loja;
typedef struct
{
    char cpf[11];
    char nome[99];
    float saldo;

}Cliente;
typedef struct
{
    char cpf[11];
    int codigo_p;

}CarrinhoCompra;
typedef struct
{
    char cpf[11];
    float valor;
    Produto produtos[99];

}Compra;

Produto produtos[100];
Estoque estoques[100];
Loja lojas[100];
Cliente clientes[100];
CarrinhoCompra carrinho[100];
Compra compras[100];


int main()
{

    printf("\n")

    return 0;
}