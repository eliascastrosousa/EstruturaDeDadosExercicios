#include <stdio.h>
#include <stdlib.h>
#include "pilhaDinamica.h"

int main()
{
    int x;

    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    Pilha *pi;
    pi = cria_pilha();

    x = insere_pilha(pi, al);
    if(x){
        printf("Elemento inserido com sucesso!");
    }else{
        printf("Erro, elemento nao inserido.");
    }

    x = tamanho_pilha(pi);
    printf("\nO tamanho da pilha e: %d", x);

    x = pilha_cheia(pi);
    if(x){
        printf("\nA Pilha esta cheia!");
    }else{
        printf("\nA pilha nao esta cheia.");
    }

    x = pilha_vazia(pi);
    if(x){
        printf("\nA Pilha esta vazia!");
    }else{
        printf("\nA pilha nao esta vazia.");
    }

    printf("\n");

    x = consulta_pilha(pi, &al);
    if(x){
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %.2f", al.n1);
        printf("\nNota 2: %.2f", al.n2);
        printf("\nNota 3: %.2f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada.");
    }

    printf("\n");

    x = remove_pilha(pi);
    if(x){
        printf("\nElemento removido com sucesso!");
    }else{
        printf("\nErro, elemento nao removido.");
    }

    destroi_pilha(pi);

    printf("\n");
    return 0;
}
