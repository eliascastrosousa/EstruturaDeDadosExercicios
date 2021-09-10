
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    int id;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIO;

FUNCIONARIO coletaDados();
void imprimeTela(FUNCIONARIO func);
void salarioNovo(float *salario);
void rel_salario_corrigido(FUNCIONARIO func);

void main (){

    setlocale(LC_ALL, "Portuguese");
    FUNCIONARIO func;

    func = coletaDados();
    imprimeTela(func);
    salarioNovo(&func.salario);
    void rel_salario_corrigido(func);
}
//inserindo valores
FUNCIONARIO coletaDados(){
    FUNCIONARIO f;
    int i;
    for(i = 0; i < 5; i++){
        printf("\n   =======================================");
        printf("\n   Digite o ID do funcion�rio: ");
        scanf("%d",&f[i].id);
        getchar();
        printf("\n   Digite o nome do funcion�rio: ");
        fgets(f[i].nome, 29, stdin);
        f[i].nome[srtlen(f[i].nome - 1)]='\0';
        printf("\n   Digite o sal�rio do funcion�rio: ");
        scanf("%f",&f[i].salario);
        printf("\n   Digite a idade do funcion�rio: ");
        scanf("%d",&f[i].idade);
        return f;
    }
}

void imprimeTela(FUNCIONARIO func){
    int i;
    for(i = 0; i < 5; i++){

        printf("\n   =======================================");
        printf("\n         FUNCIONARIO %d ", i+1);
        printf("\n   =======================================");
        printf("\n\n   O ID do funcion�rio %d e: %d", i+1,  func[i].id);
        printf("\n   O nome do funcion�rio %d e: %s", i+1, func[i].nome);
        printf("\n\n   A idade do funcion�rio %d e de: %d anos", i+1, func[i].idade);
        printf("\n\n   O salario do funcion�rio %i e: %.2f", i+1, func[i].salario);
        system("pause");
    }
}

void salarioNovo(float *salario){

    int i;
    float salNovo;
    for(i = 0; i < 5; i++){

        *salario = (*salario)*1.1;

    }
}
void rel_salario_corrigido(FUNCIONARIO func){
    int i;
    for(i = 0; i < 5; i++){

        printf("\n   =======================================");
        printf("\n      NOVO SAL�RIO DO FUNCIONARIO %d ", i+1);
        printf("\n   =======================================");
        printf("\n   O nome do funcion�rio %d e: %s", i+1, func[i].nome);
        printf("\n   O salario do funcion�rio %i e: %.2f", i+1, func[i].salario);

    }

}
