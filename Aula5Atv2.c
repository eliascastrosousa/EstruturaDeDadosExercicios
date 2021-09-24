#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tam 1

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

    //importando dados...

    printf("\nImportando dados...\n\n");

    struct funcionario f;

    fread(f.id,sizeof(struct funcionario),1,p);
    fread(&f.nome,sizeof(struct funcionario),1,p);
    fread(&f.idade,sizeof(struct funcionario),1,p);
    fread(&f.sal,sizeof(struct funcionario),1,p);

    fread(p,"\nID: %d \nNome: %s \nIdade: %d \nSalario: %0.2f", f.id, f.nome, f.idade,f.sal );


    printf("ID: %d \nNome: %s \nIdade: %d \nSalario: %f", f.id, f.nome, f.idade, f.sal);

    fclose(p);

    }

struct  funcionario ColetaDados() {
    struct funcionario func[tam];
    printf("-------------------------Carregando Estrutura de Formulario-----------------------\n\n");
    for (int  c= 0; c < tam; ++c){
        printf("Digite o ID do funcionario [%d]: ",c+1);
        scanf("%d",&func[c].id);

        getchar();
        printf("Digite o nome do funcionario [%d]: ",c+1);
        fgets(func[c].nome,30,stdin);

        printf("Digite a idade do funcionario [%d]: ",c+1);
        scanf("%d",&func[c].idade);

        printf("Digite o Salario do funcionario [%d]: ",c+1);
        scanf("%f",&func[c].sal);
        printf("----------------------------------------------------------------------------------");
        printf("\n");

    }
}
