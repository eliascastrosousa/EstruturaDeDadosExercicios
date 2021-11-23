#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"
#include <locale.h>

int main(){
    setlocale(LC_ALL,"portuguese");

    Lista *li;
    int x, menu, m;
    li = criaLista();

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    printf("\n\t\t\t\t Bem vindo as Industrias Acme!\n\n");
    m = menuLista();
    do {

            switch (m){

                case 1: //[1] Adicionar funcionário
                    //FUNCIONARIO func; //verificar como receber os dados da função entra dados e alocar na lista

                    //func = entraDados();
                    //x = insere_lista_ordenada(li, func );
                    if(x){
                        printf("\nInserido de forma ordenada com sucesso!\n");
                    }else{
                        printf("\nNão foi possivel inserir o Funcionario!\n");
                    }

                    break;


                case 2 : //[2] Excluir funcionário
                    printf("");
                    break;


                case 3: //[3] Editar funcionário
                    printf("");
                    break;


                case 4:  //[4] Buscar funcionário por ID
                    printf("");
                    break;


                case 5:  //[5] Exibir funcionário ordenados por ID
                    printf("");
                    break;


                case 6: //[6] Exibir uma lista de funcionários por faixa salarial.
                    printf("");
                    break;


                default:
                    printf("Opção invalida\n");
            }
            }while(m != 0);

            printf("\n\nSalvando arquivos...\n\n");
            //fwrite(cand, sizeof(Candidato), n, fp);
            fclose(fp);
            apagaLista(li);
            printf("Limpando dados da sessão...\nObrigado.\n\n");
            system("pause");
    }


