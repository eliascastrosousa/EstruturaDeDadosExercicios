#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaSequencial.h"

int main(){
    int x;
    Lista *li;
    int  mat = 110, posicao = 1;

    li = cria_lista();
    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.95;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.95;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.95;
    al3.n3 = 3.4;

    x = insere_lista_inicio(li, al);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro! aluno nao inserido!");
    }
printf("\n---------------------------------------------------------------");
    x = insere_lista_final(li, al2);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro aluno nao inserido!");
    }

printf("\n---------------------------------------------------------------");
    x = tamanho_lista(li);
    printf("\nTamanho da lista e: %d", x);
printf("\n---------------------------------------------------------------");
    x = lista_cheia(li);
    if(x){
        printf("\nLista cheia!");
    }else{
        printf("\nLista nao esta cheia!");
    }
printf("\n---------------------------------------------------------------");

    x = lista_vazia(li);
    if(x){
        printf("\nLista esta vazia!");
    }else{
        printf("\nLista nao esta vazia!");
    }
printf("\n---------------------------------------------------------------");

    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nAluno inserido com sucesso!");
    }else{
        printf("\nErro aluno nao inserido!");
    }
printf("\n---------------------------------------------------------------");
    x = consulta_lista_pos(li, posicao, &dados_aluno);
    if(x){
        printf("\n\n\t\tConsulta realizada com sucesso!");
        printf("\n---------------------------------------------------------------");

        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\n\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\n\t\tNao foi possivel consultar");
    }

    printf("\n");

    x = consulta_lista_mat(li, mat, &dados_aluno);
    if(x){
        printf("\n\t\tConsulta realizada com sucesso!");
        printf("\n---------------------------------------------------------------");

        printf("\nMatricula: %d", dados_aluno.matricula);
        printf("\n\nNota 1: %.2f", dados_aluno.n1);
        printf("\nNota 2: %.2f", dados_aluno.n2);
        printf("\nNota 3: %.2f", dados_aluno.n3);
    }else{
        printf("\n\t\tNao foi possivel consultar");
    }

    printf("\n");

    x = remove_lista_inicio(li);
    if(x){
        printf("\n\nAluno removido do final com sucesso!");
    }else{
        printf("\n\nErro aluno nao removido!");
    }

printf("\n---------------------------------------------------------------");

    x = remove_lista(li, mat);
    if(x){
        printf("\nAluno removido da posicao especifica com sucesso!");
    }else{
        printf("\nErro aluno nao removido da posicao especifica!");
    }
printf("\n---------------------------------------------------------------");
libera_lista(li);

printf("\n");
system("pause");

}

