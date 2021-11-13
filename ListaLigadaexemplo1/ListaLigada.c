#include <stdio.h>
#include <stdlib.h>
#include "ListaLigada.h"

struct elemento{
    ALUNO dados;
    struct elemento *prox;
};
typedef struct elemento ELEM;

Lista *cria_lista(){
    Lista *li;
    li = (Lista*) malloc(sizeof(Lista)); //guarda o primeiro nó

    if(li !=NULL){
        *li = NULL; // se alocação ok, preenche com null
    }
    return li;
}

void apagaLista(Lista *li ){        //passa o inteiro da lista se quer liberar
    if(li != NULL){      //     <-  lista é valida se for diferente de null
        ELEM *no;       // enquanto o prmeito elemento da lista for diferente
        while ((*li) != NULL){          //   while: enquanto nao estiver nums lista vazia,
            *li = (*li) ->prox;             //  executa esse conjunto de instruções,
            no = *li;                          //  até que a lista esteja vazia apontado para null
            free(no);
        }
        free(li); //ao final, libera a cabeça da lista que aponta para o inicio
    }
}

int tamLista(Lista *li){
    if(li == NULL){
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
    }if(*li == NULL){
        return 1;
    }
        return 0;
}

int insere_inicio_lista(Lista *li, ALUNO al){
    if(li==NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados=al;
    no->prox=(*li);
    *li = no;
    return 1;
}

int remove_inicio_lista(Lista *li){
    if(li == NULL){ //verifica se a lista existe
        return 0;
    }
    if(*li == NULL ){ //verifica se a lista esta cheia
        return 0;
    }
    ELEM *no = *li;
    *li = no->prox;     //resolve os dois casos, se a lista va ficar vazia ou não
    free(no);
    return 1;
}

int remove_final_lista(Lista *li){
     if(li == NULL){ //verifica se a lista existe
        return 0;
    }
    if(*li == NULL ){ //lista vazia
        return 0;
    }
    ELEM *ant, *no = *li;
    while(no->prox != NULL){
        ant = no;
        no = no->prox;
    }
    if(no == (*li)){
        *li = no->prox;
    }else{
        ant->prox= no->prox;
    }
    free(no);
    return 1;
}

int remove_lista(Lista *li, int mat){
    if(li == NULL){ //verifica se a lista existe
        return 0;
    }
    ELEM *ant, *no = li;
    while(no != NULL && no->dados.matricula != mat){
        ant  = no;
        no  = no->prox;
    }
    if(no == NULL ){ //verifica se a lista esta cheia
        return 0;
    }
    if(no == *li ){ //verifica se a lista esta cheia
        *li = no->prox;
    }else{
        ant->prox = no->prox;
    }
    free(no);
    return 1;
}

int insere_final_lista(Lista *li, ALUNO al){
    if(li==NULL){
        return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados=al;
    no->prox=(*li);
    if((*li)==NULL){
            *li = no;
    }else{
        ELEM *aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux -> prox = no;
    }
        return 1;
}

int insere_lista_ordenada(Lista *li, ALUNO al){
    if(li ==NULL){
    return 0;
    }
    ELEM *no = (ELEM*) malloc(sizeof(ELEM));
    if(no==NULL){
        return 0;
    }
    no->dados=al;
    if(listaVazia(li)){
        no->prox=(*li);
        *li = no;
        return 1;
    }else{
        ELEM *ant, *atual= *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual = atual->prox;
        }
        if(atual==*li){
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}

int consulta_lista_pos(Lista *li, int posicao, ALUNO *al){
            if(li==NULL || posicao <= 0){
                return 0;
            }
            ELEM *no = li;
            int i =1;
            while(no != NULL && i < posicao){
                no = no->prox;
                i++;
            }
            if(no == NULL){
                return 0;
            }else{
                *al = no->dados;
                return 1;
            }
    }

    int consulta_lista_mat(Lista *li, int matricula, ALUNO *al){
        if(li==NULL){
            return 0;
        }
        ELEM *no = *li;
        while(no != NULL && no->dados.matricula !=matricula){
            no = no->prox;
        }
        if(no == NULL){
            return 0;
        }else{
            *al = no->dados;
            return 1;
        }
    }
