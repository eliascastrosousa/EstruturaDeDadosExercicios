#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

struct elemento{
    FUNCIONARIO dados;
    struct elemento *prox;
}; //CRIA��O DO PONTEIRO PROXIMO

typedef struct elemento ELEM;

Lista *criaLista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL; //se aloca��o ok, preenche conteudo com null
    }
    return li;
}

void apagaLista(Lista *li){ //passa o endere�o da inteira que se quer liberar
    if(li != NULL){   //Lista � valida se for diferente de NULL
        ELEM *no; //enquanto o primeiro elemento da lista fo direfente
        while((*li) != NULL){
            no = *li;                   //while: enquanto n�o estiver numa lista vazia, executa esse conjunto de instru��es, at� que a lista esteja vazia e apontando para nulo

            *li = (*li)->prox;   //inicio da lista aponta para o prox da lista
            free(no);
        }
        free(li); //ao final, libera a cabe�a da lista
    }
}

int menuLista(){
    int menu;
    printf("Menu\n\n");
    printf("[1] Adicionar funcion�rio \n[2] Excluir funcion�rio \n[3] Editar funcion�rio ");
    printf("\n[4] Buscar funcion�rio por ID \n[5] Exibir funcion�rio ordenados por ID ");
    printf("\n[6] Exibir uma lista de funcion�rios por faixa salarial. \n[0] Sair da aplica��o.\nDigite: ");
    scanf("%d", &menu);
    return menu;
}
