/* Atividade 3
 Elabore um programa que calcule a soma de duas matrizes (M x N) dinâmicas de
números inteiros. Deve-se considerar as dimensões fornecidas pelo usuário.
Entregue no Moodle. */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int **m=NULL,**n= NULL,**s= NULL,l=0,c=0;

	printf("Digite a Qtd de linhas da Matriz: ");
	scanf("%d",&l);
	printf("Digite a Qtd de Colunas da Matriz: ");
	scanf("%d",&c);

	//criando as matrizes A, B, C dinamicamente

	m = (int **) malloc(l * sizeof(int*)); // apontando para o vetor M
    for(int i =0; i<l; i++){
        m[i] = (int*) malloc(c * sizeof(int)); //apontando para os espaços alocado de memoria
    }

    n = (int **) malloc(l * sizeof(int*));
    for(int i =0; i<l; i++){
        n[i] = (int*) malloc(c * sizeof(int));
    }

    s = (int **) malloc(l * sizeof(int*));
    for(int i =0; i<l; i++){
        s[i] = (int*) malloc(c * sizeof(int));
    }

    //---------------preenchendo os valores------------------//


    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
                m[i][j] = 1+j; //preenchendo os valores da matriz A
        }
    }
    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
                n[i][j] = 2+j; //preenchendo os valores da matriz B
        }
    }

    //----------------mostrando ao usuario-----------------//


    printf("Matriz A: \n\n");

    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
                printf("%d ",m[i][j]);
         }
        printf("\n");
    }

    printf("\nMatriz B: \n\n");

    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
                printf("%d ",n[i][j]);

         }
        printf("\n");
    }


    //----------------Calculando o Resultado da Somas das Matrizes-----------------//

    printf("\nResultado da Soma das Matrizes A e B: \n\nMatriz C: \n\n");

    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
			s[i][j] = m[i][j]+n[i][j];
		}
    }

    for(int i =0; i < l; i++){
         for(int j =0; j < c; j++){
            printf("%d ",s[i][j]);
         }
        printf("\n");
    }

    free(m);
    free(n);
    free(s);

}
