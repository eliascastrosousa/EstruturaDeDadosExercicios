#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct funcionario{
    int id;
    char nome[30];
    int idade;
    float salario;
};

void main()
{
    int i;
    struct funcionario colaboradores[5];
    setlocale(LC_ALL, "Portuguese");

    //armazena dados do funcion�rio
    for(i = 0; i < 5; i++){

        printf("\n   Digite o ID do funcion�rio %d: ", i+1);
        scanf("%d",colaboradores[i].id);
        fflush(stdin);
        printf("\n   Digite o nome do funcion�rio %d: ", i+1);
        fgets(colaboradores[i].nome, 29, stdin);
        printf("\n   Digite o sal�rio do funcion�rio %d: ", i+1);
        scanf("%f",&colaboradores[i].salario);
        printf("\n   Digite a idade do funcion�rio %d: ", i+1);
        scanf("%d",colaboradores[i].idade);


    }
    // imprime dados do funcion�rio
   for(i = 0; i < 5; i++){
        printf("\n   =======================================");
        printf("\n         FUNCION�RIO %d ", i);
        printf("\n   =======================================");
        printf("\n   O ID do funcion�rio %d �: %d", i, colaboradores[i].id);
        printf("\n   O nome do funcion�rio %d �: %s", i,colaboradores[i].nome);
        printf("\n   A idade do funcion�rio %d � de: %d anos", i,colaboradores[i].idade);
        printf("\n   O sal�rio do funcion�rio %d �: %f", i,colaboradores[i].salario);
     }

}
