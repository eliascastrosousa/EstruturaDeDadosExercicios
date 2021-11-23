#include <stdio.h>
#include <stdlib.h>
#include "filaDinamica.h"

int main()
{
    int x;
    struct aluno al, al2, al3, dados_aluno;
    Fila *fi;
    fi = cria_fila();

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

    //detectar fila vazia
    x = fila_vazia(fi);
    if(x){
        printf("\nA fila esta vazia!\n");
    }else{
        printf("\nA fila nao esta vazia.\n");
    }

    //detectar fila cheia
    x = fila_cheia(fi);
    if(x){
        printf("\nA fila esta cheia!\n");
    }else{
        printf("\nA fila nao esta cheia.\n");
    }

    x = insere_fila(fi, al);
    if(x){
        printf("\nElemento inserido com sucesso!\n");
    }else{
        printf("\nErro, elemento não inserido.\n");
    }

    x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d\n", x);

    x = consulta_fila(fi, &al);
    if(x){
        printf("\nConsulta realizada com sucesso!\n");
        printf("\nMatricula: %d\n", al.matricula);
        printf("\nNota [1]: %.2f\nNota [2]: %.2f\nNota [3]: %.2f\n", al.n1,al.n2,al.n3);

    }else{
        printf("\nErro, consulta não realizada.\n");
    }

    x = remove_fila(fi);
    if(x){
        printf("\nElemento removido com sucesso!\n");
    }else{
        printf("\nErro, elemento não removido.\n");
    }

    destroi_fila(fi);

    return 0;
}
