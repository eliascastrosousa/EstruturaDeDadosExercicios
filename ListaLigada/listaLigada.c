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

int tamLista(Lista *li){
    if(li==NULL){
        return 0;
    }
    int acum=0;
    ELEM *no = *li;
    while(no != NULL){
        acum++;
        no = no->prox;
    }
    return acum;
}

int listaCheia(Lista *li){
    return 0;
}

int listaVazia(Lista *li){
    if(li == NULL){
        return 1;
    }
    if(*li == NULL){
        return 1;
    }
    return 0;
}

int insere_inicio_lista(Lista *li, ALUNO al){
 if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc (sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}


int insere_final_lista(Lista *li, ALUNO al){
    if(li == NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc (sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados = al;
    no->prox= NULL;
    if((*li) == NULL){
        *li = no;
    }else{
        ELEM *aux= *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}

