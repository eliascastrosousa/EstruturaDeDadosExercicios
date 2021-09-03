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

setlocale(LC_ALL,"Portuguese");

    int i;
    struct funcionario colaboradores[5];
    setlocale(LC_ALL, "Portuguese");

    //armazena dados do funcionário
    for(i = 0; i < 2; i++){

        printf("\n   Digite o ID do funcioario %d: ", i+1);
        scanf("%d",&colaboradores[i].id);
        getchar();
        printf("\n   Digite o nome do funcioario %d: ", i+1);
        fgets(colaboradores[i].nome, 29, stdin);
        printf("\n   Digite o salario do funcioario %d: ", i+1);
        scanf("%f",&colaboradores[i].salario);
        printf("\n   Digite a idade do funcioario %d: ", i+1);
        scanf("%d",&colaboradores[i].idade);
    }
    // imprime dados do funcionário
   for(i = 0; i < 2; i++){
        printf("\n   =======================================");
        printf("\n         FUNCIONARIO %d ", i+1);
        printf("\n   =======================================");
        printf("\n   O ID do funcioario %d e: %d", i+1, colaboradores[i].id);
        printf("\n   O nome do funcioario %d e: %s", i+1,colaboradores[i].nome);
        printf("\n   A idade do funcioario %d e de: %d anos", i+1,colaboradores[i].idade);
        printf("\n   O salario do funcioario %i e: %0.2f", i+1,colaboradores[i].salario);
     }

}
