#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main(){
    Lista *li;
    int x;
    li = criaLista();

    int  mat = 110, posicao = 1;

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

    x = insere_inicio_lista(li, al);
    if(x){
        printf("\nInserido no inicio com sucesso\n");
    }else{
        printf("\nNão foi possivel inserir o aluno!\n");
    }

     x = insere_final_lista(li, al2);
    if(x){
        printf("\nInserido no final com sucesso\n");
    }else{
        printf("\nNão foi possivel inserir o aluno!\n");
    }

     x = insere_lista_ordenada(li, al3);
    if(x){
        printf("\nInserido de forma ordenada com sucesso\n");
    }else{
        printf("\nNão foi possivel inserir o aluno!\n");
    }



    x = tamLista(li);
    printf("\no tamanho da lista e: %d\n",x);

    if(listaCheia(li)){
        printf("A Lista esta cheia");
    }else{
        printf("\nA Lista nao esta cheia!\n");
    }

      if(listaVazia(li)){
        printf("\nA Lista esta Vazia\n");
    }else{
        printf("\nA Lista nao esta Vazia!\n");
    }



    apagaLista(li); //ultima função a ser chamada pelo main



    printf("\n\nHello world!\n");
    return 0;
}
