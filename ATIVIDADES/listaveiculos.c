#include <stdio.h>
#include <windows.h>

typedef struct listaveiculos
{
    char modelo[30];
    char marca[30];
    int ano_fabricacao;
    float litragem;
    int portas;
    int ocupantes;
    int kms;
} veiculo;

veiculo cadastrar_veiculo();
void imprimeveiculo(veiculo carro);


int proximoindice = 0;
veiculo veiculos[100];

int main()
{

    veiculo carro1;
    SetConsoleOutputCP((UINT)65001);
    while(1){

        system("cls");

            printf("Lista de Veículos\n"
            "Escolha uma das opções abaixo: \n"
            "1 - Cadastras Veículos\n"
            "2 - Relatorio de Veículos\n"
            "[ESC] Encerrar o programa\n"
            );
        

        switch (getch())
        {

        case '1':
        if (proximoindice < 100){
            veiculos[proximoindice++] = cadastrar_veiculo();
            break;
        }
        system("cls");
        printf("Limite de cadastros exedido!!!");
        case '2':
            for(int n = 0; n < proximoindice; n++)
            imprimeveiculo(veiculos[n]);
            break;
        case 27:
            return(0);
        
        default:
            system("cls");
            printf("\n\nOpção Invalida\n\n");
            system("pause");
        }

    system("pause");

    }

    carro1 = cadastrar_veiculo();
    imprimeveiculo(carro1);

    return 0;
}

void imprimeveiculo(veiculo carro)
{
    printf("\n--------------------------------------\n");
    printf("Dados do veiculo: \n");
    printf("Marca:\t\t\t%s\n", carro.marca);
    printf("Modelo:\t\t\t%s\n", carro.modelo);
    printf("Ano de Fabrição:\t%d\n", carro.ano_fabricacao);
    printf("Litragem:\t\t%.1f\n", carro.litragem);
    printf("Número de Portas:\t%d\n", carro.portas);
    printf("Ocupantes:\t\t%d\n", carro.ocupantes);
    printf("Kilometragem:\t\t%d\n", carro.kms);
    printf("\n--------------------------------------\n");
}
veiculo cadastrar_veiculo()
{
    veiculo carro;

    printf("\n-----------------------------------------\n");
    printf("\nCadrasto de veículo\n");
    printf("\n-----------------------------------------\n");

    printf("\nInforme a marca do veiculo: ");
    fflush(stdin);
    gets(carro.marca);

    printf("Informe o Modelo do veiculo: ");
    fflush(stdin);
    gets(carro.modelo);

    printf("Informe o ano de fabricação: ");
    scanf("%d", &carro.ano_fabricacao);

    printf("Informe a Litragem do veiculo: ");
    scanf("%f", &carro.litragem);

    printf("Informe o Número de portas: ");
    scanf("%d", &carro.portas);

    printf("Informe o Número de ocupantes: ");
    scanf("%d", &carro.ocupantes);

    printf("Informe a Kilometragem: ");
    scanf("%d", &carro.kms);

    return (carro);
}
