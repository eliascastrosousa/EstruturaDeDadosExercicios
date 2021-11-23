#include <stdio.h>
#include <stdlib.h>
#include "LSE.h"

struct lista{ //tipo de dado que vai ficar oxulto pelo encapsulamento
    int qtd; //o indice e também quantos elementos de struct ja tem
    struct aluno dados[MAX]; //aqui ta puxando a struct aluno  pra cá
};

Lista *cria_lista(){ //só devolve end. do tipo lista
    Lista *li; //ponteiro p alocar o bloco de memoria
    li = (Lista*) malloc(sizeof(struct lista)); //a alocação vai ser de um bloco do tamanho do tipo lista
    if(li != NULL){ //
        li->qtd = 0;
    }
    return li;
}

void libera_lista(Lista *li){
    free(li);
}


