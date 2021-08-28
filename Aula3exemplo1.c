#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct tipo_data{ //instrução de data nascimento
    int dia, mes, ano;
};

struct tipo_ficha_cadastral{ //instrução da ficha cadastral, e dentro dela a struct dat nascimento
    char nome[30];
    int id;
    struct tipo_data nascimento;
};

void main(){

    struct tipo_ficha_cadastral aluno;

    printf("Aperte Enter Para iniciar");

    getchar();
    printf("Digite o nome: ");
    fgets(aluno.nome,30,stdin);

    printf("Digite o prontuario: ");
    scanf("%d", &aluno.id);

    printf("Digite o dia de Nasc: ");
    scanf("%d", &aluno.nascimento.dia);

    printf("Digite o mes de Nasc: ");
    scanf("%d", &aluno.nascimento.mes);

    printf("Digite o ano de Nasc: ");
    scanf("%d", &aluno.nascimento.ano);


    printf("\n\nNome: %s",aluno.nome);
    printf("Prontuario: %d",aluno.id);
    printf("\nData de Nasc: %d ",aluno.nascimento.dia);
    printf("%d ",aluno.nascimento.mes);
    printf("%d\n\n",aluno.nascimento.ano);

    //  return 0;
}

