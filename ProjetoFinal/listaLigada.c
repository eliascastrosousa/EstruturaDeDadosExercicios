#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

struct elemento{
    FUNCIONARIO dados;
    struct elemento *prox;
}; //CRIAÇÃO DO PONTEIRO PROXIMO

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

int menuLista(){
    int menu;
    printf("Menu\n\n");
    printf("[1] Adicionar funcionário \n[2] Excluir funcionário \n[3] Editar funcionário ");
    printf("\n[4] Buscar funcionário por ID \n[5] Exibir funcionário ordenados por ID ");
    printf("\n[6] Exibir uma lista de funcionários por faixa salarial. \n[0] Sair da aplicação.\nDigite: ");
    scanf("%d", &menu);
    return menu;
}
