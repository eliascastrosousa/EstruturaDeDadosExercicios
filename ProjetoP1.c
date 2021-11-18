//nome: Elias Castro Sousa Junior – prontuário: gu3015378 – Turma: Sexta-Feira. (dia da semana)
//nome: Caio da Luz Rodrigues – prontuário: gu3015432 – Turma: Sexta-Feira. (dia da semana)

#include <stdio.h>
#include <stdlib.h>
#define tam 30

typedef struct candidato{
    int id;
    char nome[tam];
    char profissao[tam];
    int telefone;
}Candidato;

//Criação das funções
Candidato entraDados();
void imprimeDados(Candidato p[], int n );
QtdCandidatos(int n);
void liberaMemoria();


void main(){
    int n, *p=NULL; //ponteiro apontando para nulo

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    printf("Digite a quantidade de Candidatos para a Vaga: ");
    scanf("%d", &n);

    //função para alocar a memoria no ponteiro
    p = QtdCandidatos(n); //endereço de p ta apontando para

    printf("\n\n\t\t  == Cadastro Candidatos a Vaga ==\n\n");
    Candidato p;

    for (int i = 0; i < n; ++i){
        p[i] = entraDados();
    }
    printf("------------------------------------------------------------\n");

    printf("\n\nRegistro finalizado....\n\n\n");
    printf("\t\t == Relatorio de Candidatos == \n");

    imprimeDados(p, n);
    printf("\n------------------------------------------------------------\n\b");

    system("pause");

    printf("\nSalvando os arquivos...\n\n");
    fwrite(cand, sizeof(Candidato), n, fp);
    fclose(fp);
    liberaMemoria(p);
    system("pause");

}

QtdCandidatos(int n){
    int *quantcand; //criado um ponteiro quantcand
    quantcand = (int*) malloc(n*sizeof(Candidato));
    return quantcand; // retornando o endereço de memoria que vai apontar para o tamanho de  n structs de candidatos
}

Candidato entraDados(){
    Candidato cand;
        printf("------------------------------------------------------------\n");
        printf("Digite o ID do Candidato: ");
        scanf("%d", &cand.id);
        getchar();
        printf("Digite o nome do Candidato: ");
        fgets(cand.nome, 29, stdin);
        cand.nome[strlen(cand.nome) - 1] = '\0';
        printf("Digite a profissao do Candidato: ");
        fgets(cand.profissao, 29, stdin);
        cand.profissao[strlen(cand.profissao) - 1] = '\0';
        printf("Digite o Telefone do Candidato: ");
        scanf("%d", &cand.telefone);
    return cand;
}

void imprimeDados(Candidato cand[], int n){
        int j=0;
        for(int i=0; i<n; i++){
        j++;
        printf("\n\n------------------------------------------------------------\n");
        printf("\nID do Candidato[%d]: %d", j, cand[i].id);
        printf("\nNome do Candidato[%d]: %s", j, cand[i].nome);
        printf("\nProfissao do Candidato[%d]: %s", j, cand[i].profissao);
        printf("\nTelefone do Candidato[%d]: %d", j, cand[i].telefone);
        }
}

void liberaMemoria(p){
    free(p);
    p=0;
}

