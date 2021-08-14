/* Codifique o programa matrizes 5 x 5, em todas as suas etapas exemplificada anteriormente;
    inclua uma rotina de impressão para visualização da matriz no console (tela do terminal),
    que imprima em tela no formato de uma matriz, ou seja, com linhas e colunas; */

#include <stdio.h>
#include <locale.h>
#define TAM 5 //utilizei o TAM para poder testar em uma matriz de tamanho menor

main(){
setlocale(LC_ALL,"portuguese");
int mt[TAM][TAM], v[10];
int i=0,j=0,soma=0;

for(i=0; i<TAM; i++){               // Entrada dos Dados
        for(j=0; j<TAM; j++){
            printf("Digite os valores que irão popular a matriz na posição [%d][%d]: ", i+1, j+1);
            scanf("%d", &mt[i][j]);
    }
}

printf("\nSomando as linhas...\n\n");

for(i=0; i<TAM; i++){               // Soma das linhas
        for(j=0; j<TAM; j++){
            soma += mt[i][j];
        }
        printf("\nLinha %d: Soma = %d\n", i+1,soma);
        v[i]=soma;
        soma =0;
}

printf("\nSomando as Colunas...\n\n");

for(j=0; j<TAM; j++){               // Soma das colunas
        for(i=0; i<TAM; i++){
            soma += mt[i][j];
        }
        printf("\nColuna %d: Soma = %d\n", j+1,soma);
        v[j+TAM]=soma;
        soma=0;
}

for(i=0; i<TAM; i++){        // Exibindo as somas dos valores de cada linha e coluna
    printf("\nA soma dos valores da Linha %d São: %d", i+1, v[i]);
    printf("\nA soma dos valores da Coluna %d São: %d", i+1, v[i+TAM]);
}
printf("\n\n");
for(i=0; i<TAM; i++){               // Exibindo a matriz em sua forma quadratica
        printf("\n");
        for(j=0; j<TAM; j++){
            printf("%d ", mt[i][j]);
        }
    }
printf("\n\n");
system("pause");
}
