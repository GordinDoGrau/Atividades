#include <stdio.h>
int turma;
int main(void){
int n1,n2,n3;
do{
    printf("Digite a quantidade de alunos na turma: \n");
    scanf("%d", &turma);
for(int t=1;t<=turma;t++){
    printf("Digite as notas do aluno: %d \n",t);
    scanf("%d %d %d", &n1,&n2,&n3);
    int media;
    media = (n1+n2+n3)/3;
    if( media >= 7)
    {
        printf("O aluno esta aprovado!\n");
    }
    if( media <= 4)
    {
        printf("O aluno esta reprovado\n");
    }
    else
    {
        printf("Aluno em exame\n");
    }
    
    printf("A media do aluno e: %d\n",media);
} printf("Para sair digite (S) para voltar ao inicio qualquer tecla\n");
}while (getch() != 's');
return 0;
}