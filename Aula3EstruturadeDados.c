#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct cadastro_funcionario{
    int id;
    int idade;
    char nome[30];
    float salario;
};

void main(){

    struct cadastro_funcionario func1, func2, func3;

    //coletando func1
    func1.id = 123;
    strcpy(func1.nome,"elias castro");
    func1.idade = 20;
    func1.salario = 1200;

    printf("Funcionario ID: %d",func1.id);
    printf("\nNome: %s ",func1.nome);
    printf("\nIdade: %d ",func1.idade);


    //coletando func2
    printf("\n\nDigite o nome de outro funcionario: ");
    fgets(func2.nome,30,stdin);

    printf("Digite o id do funcionario: ");
    scanf("%d",&func2.id);

    printf("Digite a idade do funcionario: ");
    scanf("%d",&func2.idade);


    printf("\nFuncionario ID: %d",func2.id);
    printf("\nNome: %s ",func2.nome);
    printf("\nIdade: %d ",func2.idade);
    //col 3

    func3 = func1;
    //func3 = {1233,25,"karina luongo",50.00}
    printf("\nFuncionario ID: %d",func3.id);
    printf("\nNome: %s ",func3.nome);
    printf("\nIdade: %d ",func3.idade);
    printf("\nSalario: %f ",func3.salario);

}
