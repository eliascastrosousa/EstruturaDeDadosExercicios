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
    printf("[1] Adicionar funcionário \n[2] Excluir funcionário \n[3] Editar funcionário ");
    printf("\n[4] Buscar funcionário por ID \n[5] Exibir funcionário ordenados por ID ");
    printf("\n[6] Exibir uma lista de funcionários por faixa salarial. \n[0] Sair da aplicação.\nDigite: ");
    scanf("%d", &menu);









    printf("\nSalvando os arquivos...\n\n");
    //fwrite(cand, sizeof(Candidato), n, fp);
    fclose(fp);
    apagaLista(li);
    printf("Limpando dados da sessão...\nObrigado.\n\n");



    system("pause");
}
