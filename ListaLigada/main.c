#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main(){
    Lista *li;

    li = criaLista();

    apagaLista(li); //ultima função a ser chamada pelo main



    printf("Hello world!\n");
    return 0;
}
