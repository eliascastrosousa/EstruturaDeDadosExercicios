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

    //armazena dados do funcionário
    for(i = 0; i < 5; i++){

        printf("\n   Digite o ID do funcionário %d: ", i+1);
        scanf("%d",colaboradores[i].id);
        fflush(stdin);
        printf("\n   Digite o nome do funcionário %d: ", i+1);
        fgets(colaboradores[i].nome, 29, stdin);
        printf("\n   Digite o salário do funcionário %d: ", i+1);
        scanf("%f",&colaboradores[i].salario);
        printf("\n   Digite a idade do funcionário %d: ", i+1);
        scanf("%d",colaboradores[i].idade);


    }
    // imprime dados do funcionário
   for(i = 0; i < 5; i++){
        printf("\n   =======================================");
        printf("\n         FUNCIONÁRIO %d ", i);
        printf("\n   =======================================");
        printf("\n   O ID do funcionário %d é: %d", i, colaboradores[i].id);
        printf("\n   O nome do funcionário %d é: %s", i,colaboradores[i].nome);
        printf("\n   A idade do funcionário %d é de: %d anos", i,colaboradores[i].idade);
        printf("\n   O salário do funcionário %d é: %f", i,colaboradores[i].salario);
     }

}
