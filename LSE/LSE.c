#include <stdio.h>
#include <stdlib.h>
#include "LSE.h"

struct lista{ //tipo de dado que vai ficar oxulto pelo encapsulamento
    int qtd; //o indice e tamb�m quantos elementos de struct ja tem
    struct aluno dados[MAX]; //aqui ta puxando a struct aluno  pra c�
};

Lista *cria_lista(){ //s� devolve end. do tipo lista
    Lista *li; //ponteiro p alocar o bloco de memoria
    li = (Lista*) malloc(sizeof(struct lista)); //a aloca��o vai ser de um bloco do tamanho do tipo lista
    if(li != NULL){ //
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista *li){
    free(li);
}


