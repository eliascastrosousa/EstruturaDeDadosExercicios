/*1 – Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve
conter o número de matricula do aluno, seu nome e as notas de três provas. Agora,
escreva um programa que leia os dados de cinco alunos e os armazene nessa estrutura.
Em seguida, exiba o nome e as notas do aluno que possua a maior média geral dentre
os cinco.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct strc_aluno{
    int id;
    char nome[30];
    float prova1;
    float prova2;
    float prova3;
    float media;
} Aluno;

Aluno ColetaDados();
void imprimeDados(Aluno *alunos, int n);
void imprimeMaior(Aluno *alunos, int n);


main(){
    int n=3;
    Aluno alunos[n];
    for (int i = 0; i < n; ++i){
       alunos[i] = ColetaDados();
    }
    printf("--------------------------------------------------------\n\n");
    printf("Aluno(a) com a Maior Media: \n");
       imprimeDados(alunos, n);

}

Aluno ColetaDados() {
    Aluno alunos ;

        printf("Digite o ID do aluno: ");
            scanf("%d",&alunos.id);
            getchar();
        printf("Digite o nome do aluno: ");
            fgets(alunos.nome,30,stdin);
        printf("Digite a nota da Prova 1: ");
            scanf("%f",&alunos.prova1);
        printf("Digite a nota da Prova 2: ");
            scanf("%f",&alunos.prova2);
        printf("Digite a nota da Prova 3: ");
            scanf("%f",&alunos.prova3);
        printf("\n");
        alunos.media = (alunos.prova1+alunos.prova2+alunos.prova3)/3;

        return alunos;
}

void imprimeDados(Aluno *alunos, int n){
    float maior=0;
    int x;
     for (int i = 0; i < n; ++i){
        if(alunos[i].media > maior){
            maior = alunos[i].media;
            x = i;
        }
     }
        printf("\n\nID do aluno: %d",alunos[x].id);
        printf("\nnome do aluno: %s",alunos[x].nome);
        printf("nota da Prova 1: %0.2f",alunos[x].prova1);
        printf("\nnota da Prova 2: %0.2f",alunos[x].prova2);
        printf("\nnota da Prova 3: %0.2f",alunos[x].prova3);
        printf("\n\nMedia do aluno: %0.2f\n\n",alunos[x].media);
}
