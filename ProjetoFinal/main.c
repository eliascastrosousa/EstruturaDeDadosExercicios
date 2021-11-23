#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    Lista *li;
    int x;
    li = criaLista();

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    printf("\n\t\t\t\t Bem vindo as Industrias Acme!\n\n");











    apagaLista(li);
    printf("Limpando dados da sessão...\nObrigado.\n\n");



    system("pause");
}
