#include <stdio.h>
#include <stdlib.h>
#include "ListaLigada.h"

int main(){
    int x, mat=110, posicao=1;
    Lista *li;

    li = cria_lista();

    x = tamLista(li);
    printf("\nO tamanho da lista e: %d\n", x);

    if(listaCheia(li)){
        printf("\nA Lista esta cheia!");
    }else{
            printf("\nA Lista ainda nao esta cheia!");
    }

    printf("\n");

    if(listaVazia(li)){
        printf("\nLista esta vazia");
    }else{
        printf("\nLista nao esta vazia");
    }

    struct aluno al, al2, al3, dados_aluno;

    al.matricula = 100;
    al.n1 = 5.1;
    al.n2 = 6.2;
    al.n3 = 7.3;

    al2.matricula = 120;
    al2.n1 = 7.1;
    al2.n2 = 4.2;
    al2.n3 = 8.3;

    al3.matricula = 110;
    al3.n1 = 8.6;
    al3.n2 = 3.9;
    al3.n3 = 7.6;
    printf("\n");

    x = insere_inicio_lista(li, al);
    if(x){
        printf("\ninserido no inicio com sucesso!");
    }else{
        printf("\nNao foi possivel inserir no inicio!");
    }
    printf("\n");

    x = insere_final_lista(li, al2);
     if(x){
        printf("\ninserido no final com sucesso!");
    }else{
        printf("\nNao foi possivel inserir no final!");
    }
    printf("\n");

    x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\ninserido ordenadamente com sucesso!");
    }else{
        printf("\nNao foi possivel inserir ordenadamente!");
    }
    printf("\n");

    x = remove_inicio_lista(li);
    if(x){
        printf("\nRemovido do inicio com sucesso!\n");
    }else{
        printf("\nNao foi possivel Remover do inicio!\n");
    }

    x = remove_final_lista(li);
    if(x){
        printf("\nRemovido do final com sucesso!\n");
    }else{
        printf("\nNao foi possivel Remover do final!\n");
    }

    x = remove_lista(li, mat);
    if(x){
        printf("\nElemento Removido com sucesso!\n");
    }else{
        printf("\nNao foi possivel Remover o elemento!\n");
    }

    x= consulta_lista_pos(li, posicao, &al);
    printf("\n\nConteudo na posicao %d: ", posicao);
    printf("\n%d", al.matricula);
    printf("\n%f", al.n1);
    printf("\n%d", al.n2);
    printf("\n%d", al.n3);

    x= consulta_lista_mat(li, mat, &al);
    printf("\n\nMatricula encontrada na posicao %d: ", mat);
    printf("\n%d", al.matricula);
    printf("\n%f", al.n1);
    printf("\n%d", al.n2);
    printf("\n%d", al.n3);

    apagaLista(li); //ultima função a ser executada

}
