#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    Lista *li;
    int x, menu;
    li = criaLista();

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    printf("\n\t\t\t\t Bem vindo as Industrias Acme!\n\n");

    printf("Menu\n\n");
    printf("[1] Adicionar funcion�rio \n[2] Excluir funcion�rio \n[3] Editar funcion�rio ");
    printf("\n[4] Buscar funcion�rio por ID \n[5] Exibir funcion�rio ordenados por ID ");
    printf("\n[6] Exibir uma lista de funcion�rios por faixa salarial. \n[0] Sair da aplica��o.\nDigite: ");
    scanf("%d", &menu);









    printf("\nSalvando os arquivos...\n\n");
    //fwrite(cand, sizeof(Candidato), n, fp);
    fclose(fp);
    apagaLista(li);
    printf("Limpando dados da sess�o...\nObrigado.\n\n");



    system("pause");
}
