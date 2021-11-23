#include <stdio.h>
#include <stdlib.h>

int main(void){

    int linhas = 3, colunas = 3;
    int **matriz; //ponteiro bidimensional
    matriz = (int **) malloc(linhas * sizeof(int*)); // apontando para outros ponteiros
    for(int i =0; i<linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int)); //
    }
    for(int i =0; i < linhas; i++){
         for(int j =0; j < colunas; j++){
                printf("Digite o Valor da Linha [%d] Coluna [%d]: ",i,j);
                scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");

    for(int i =0; i < linhas; i++){
         for(int j =0; j < colunas; j++){
                printf("%d ",matriz[i][j]);

         }
        printf("\n");
    }

    free(matriz);

    printf("\n");

    for(int i =0; i < linhas; i++){
         for(int j =0; j < colunas; j++){
                printf("%d ",matriz[i][j]);

         }
        printf("\n");
    }





}
