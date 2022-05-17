#include <stdio.h>
#include <windows.h>
typedef struct listatelefonica
{
    int idade;
    int telefone;
    char email[50];
    char nome[50];
    char rua[50];
    char bairro[50];
    char cidade[50];
    int cep;
    int numero_casa;
}lista;

lista cadastro();
void lista1(lista telefonica);

int proximoindice = 0;
lista pessoa[999];


int main(){

    lista pessoa1;
    SetConsoleOutputCP((UINT)65001);

    while(1){

        system("cls");
            printf("\n------------------------------\n");
            printf("\nLista Telefonica\n\n"
            "Escolha uma das opções: \n"
            "1 - Cadastrar pessoas\n"
            "2 - Lista Telefonica atual (Pessoas ja registradas)\n"
            "[ESC] Encerrar o programa\n"
            );
            printf("\n------------------------------\n");

        switch (getch())
        {
            case '1':
        if (proximoindice < 100){
            pessoa[proximoindice++] = cadastro();
            break;
        }
        system("cls");
        printf("Limite de cadastros exedido!!!");
            case '2':
            for(int n = 0; n < proximoindice; n++)
            lista1(pessoa[n]);
            break;
            case 27:
            return(0);

            default:
            system("cls");
            printf("\n\nOpção invalida\n\n");
            system("pause");
        }
    
    system("pause");
    
    }

    pessoa1 = cadastro();
    lista1(pessoa1);

    return 0;
}

void lista1(lista telefonica){

    printf("\n------------------------------------------\n");
    printf("Nome: %s\n",telefonica.nome);
    printf("Idade: %d\n",telefonica.idade);
    printf("Telefone: %d",telefonica.telefone);
    printf("Email: %s",telefonica.email);
    printf("Cidade: %s",telefonica.cidade);
    printf("Cep: %d",telefonica.cep);
    printf("Bairro: %s", telefonica.bairro);
    printf("Rua: %s",telefonica.rua);
    printf("Numero da casa: %d",telefonica.numero_casa);
    printf("\n------------------------------------------\n");
}
lista cadastro(){

    lista pessoa;

    printf("\n------------------------------------\n");
    printf("\nLista Telefonica\n");
    printf("\n------------------------------------\n");

    printf("\nInforme o nome da pessoa: ");
    fflush(stdin);
    gets(pessoa.nome);

    printf("Informe a idade da pessoa: ");
    fflush(stdin);
    gets(pessoa.idade);

    printf("Informe o telefone: ");
    scanf("%d", &pessoa.telefone);

    printf("Informe o email: ");
    scanf("%d", &pessoa.email);

    printf("Informe a cidade: ");
    fflush(stdin);
    gets(pessoa.cidade);

    printf("Informe o cep: ");
    scanf("%d", &pessoa.cep);

    printf("Informe o Bairro: ");
    fflush(stdin);
    gets(pessoa.bairro);

    printf("Informe a rua: ");
    fflush(stdin);    
    gets(pessoa.rua);
    
    printf("Informe o número da casa: ");
    scanf("%d", &pessoa.numero_casa);

    return (pessoa);
}
