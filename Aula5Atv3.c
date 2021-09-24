#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam  2

	struct funcionario{
    int id;
    char nome[30];
    int idade;
    float sal;
	};

    struct funcionario ColetaDados();

    int main(){

    FILE *p;
    p = fopen("Aula5atv2.txt", "wb");
    if (p == NULL){ // teste de abertura
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    struct funcionario func;

    func = ColetaDados();

    int gravacao = fwrite(&func, sizeof(struct funcionario), 1, p);

    if (gravacao != NULL){
        printf("Gravado com Sucesso!!\n");
    }else{
        printf("Não foi possivel Gravar!\n");
    }
    fclose(p);

    p = fopen("Aula5atv2.txt", "rb");
    if (p == NULL){ // teste de abertura
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    };

    printf("\nImportando dados...\n\n");

    fread(&func,sizeof(struct funcionario),1,p);

    printf("ID: %d \nNome: %sIdade: %d \nSalario: %0.2f\n\n", func.id, func.nome, func.idade, func.sal);

    fclose(p);
    return 0;

    }

struct  funcionario ColetaDados() {
    struct funcionario f_st;
    printf("-------------------------Carregando Estrutura de Formulario-----------------------\n\n");
    for (int  c= 0; c < tam; ++c){
        printf("Digite o ID do funcionario [%d]: ",c+1);
        scanf("%d",&f_st.id);

        getchar();
        printf("Digite o nome do funcionario [%d]: ",c+1);
        fgets(f_st.nome,30,stdin);

        printf("Digite a idade do funcionario [%d]: ",c+1);
        scanf("%d",&f_st.idade);

        printf("Digite o Salario do funcionario [%d]: ",c+1);
        scanf("%f",&f_st.sal);
        printf("----------------------------------------------------------------------------------");
        printf("\n");

        return f_st;

    }
}
