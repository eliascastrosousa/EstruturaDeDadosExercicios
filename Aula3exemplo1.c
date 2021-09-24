#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 2

struct tipo_data{
    int dia, mes, ano;
};

struct tipo_ficha_cadastral{ //instrução da ficha cadastral, e dentro dela a struct dat nascimento
    char nome[30];
    int id;
    struct tipo_data nascimento; //usando a struct data para receber data de nascimento
};

void main(){

struct tipo_ficha_cadastral alunos[tam];

printf("Aperte Enter ");
  for(int i = 0; i<tam; i++){
    getchar();
    printf("\nDigite o nome do Aluno [%d]: ", i+1);
    fgets(alunos[i].nome,29,stdin);

    printf("Digite o prontuario: ");
    scanf("%d", &alunos[i].id);

    printf("Digite o dia de Nasc: ");
    scanf("%d", &alunos[i].nascimento.dia);

    printf("Digite o mes de Nasc: ");
    scanf("%d", &alunos[i].nascimento.mes);

    printf("Digite o ano de Nasc: ");
    scanf("%d", &alunos[i].nascimento.ano);
  }

    for(int i = 0; i<tam; i++){
    printf("-------------------------------------");
    printf("\nNome: %s",alunos[i].nome);
    printf("Prontuario: %d",alunos[i].id);
    printf("\nData de Nasc: %d ",alunos[i].nascimento.dia);
    printf("%d ",alunos[i].nascimento.mes);
    printf("%d\n\n",alunos[i].nascimento.ano);
    }
    printf("-------------------------------------");

}

