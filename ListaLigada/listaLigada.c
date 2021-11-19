#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

struct elemento{
    ALUNO dados;
    struct elemento *prox;
};

typedef struct elemento ELEM;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL; //se alocação ok, preenche conteudo com null
    }
    return li;
}

void apagaLista(Lista *li){ //passa o endereço da inteira que se quer liberar
    if(li != NULL){   //Lista é valida se for diferente de NULL
        ELEM *no; //enquanto o primeiro elemento da lista fo direfente
        while((*li) != NULL){
            no = *li;                   //while: enquanto não estiver numa lista vazia, executa esse conjunto de instruções, até que a lista esteja vazia e apontando para nulo

            *li = (*li)->prox;   //inicio da lista aponta para o prox da lista
            free(no);
        }
        free(li); //ao final, libera a cabeça da lista
    }
}
