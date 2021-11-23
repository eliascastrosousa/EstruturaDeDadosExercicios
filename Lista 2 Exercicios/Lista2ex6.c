/*6. Utilizando o programa do exercício anterior, crie uma rotina para salvar o conteúdo
do vetor em um arquivo de forma binária, que é mais fácil de utilizar quando
trabalhamos com vetores de estruturas. Este seu novo programa deve ser capaz de
salvar todo o conteúdo gerado em uma seção de utilização, para que o mesmo conteúdo
seja recuperado na próxima seção de utilização, ou seja, seu novo programa deve ser
capaz de recuperar todos os dados gravados em seção anterior para continuar o
processamento.*/


#include <stdio.h>
#include <stdlib.h>

//criação da struct
typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[30];
}Cadastro;

//criação das funções
Cadastro coletaDados();
Cadastro *CadastroQtd(int n);
void liberaDados(Cadastro *p );

//main
void main(){
    int n=0;

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    Cadastro *p=NULL; //ponteiro p

    printf("Digite o numero de cadastro a ser feito: " );
    scanf("%d", &n);

    //função para alocar a memoria no ponteiro
    p = CadastroQtd( n);

    printf("\n\t\t  == Ficha Cadastral  ==\n");

    for(int c=0; c<n; c++){
            p[c] = coletaDados();
    }
    printf("------------------------------------------------------------\n");

    printf("\n\nRegistro finalizado....\n\n\n");
    fwrite(&p, sizeof(Cadastro),1, fp);
    fclose(fp);

    printf("\t\t == Relatorio do Cadastro == \n");

    fopen("arquivo.txt", "rb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    fread(&p, sizeof(Cadastro), 1, fp);
    for(int c = 0; c<n; c++){
        printf("\nNome do candidato [%d]: %s", c+1, p[c].nome);
        printf("\nIdade do candidato [%d]: %d",c+1, p[c].idade);
        printf("\nEndereco do candidato [%d]: %s\n\n",c+1, p[c].endereco);
    }

    printf("------------------------------------------------------------\n");
    system("pause");

}

Cadastro *CadastroQtd(int n){
    int *quantidade;
    quantidade = (int*) malloc(n*sizeof(Cadastro));
    return quantidade;
}

Cadastro coletaDados(){
    Cadastro cad;
        printf("------------------------------------------------------------\n");
        getchar();
        printf("Digite o nome: ");
        fgets(cad.nome, 29, stdin);
        cad.nome[strlen(cad.nome) - 1] = '\0';

        printf("Digite o Endereco: ");
        fgets(cad.endereco, 29, stdin);
        cad.endereco[strlen(cad.endereco) - 1] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &cad.idade);
    return cad;
}




/*



#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[30];
}Cadastro;

Cadastro entraDados();

void main(){
    int *p=NULL;

    FILE *fp = fopen("arquivo.txt", "wb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }
    printf("\n\t\t  == Ficha Cadastral  ==\n");

    Cadastro cad;
    cad = entraDados();

    printf("\nSalvando os arquivos...\n\n");

    fwrite(&cad, sizeof(Cadastro),1, fp);
    fclose(fp);

    fopen("arquivo.txt", "rb");
    if (fp == NULL){
        printf("Erro na abertura!\n");
        system("pause");
        exit(1);
    }

    Cadastro c;
    fread(&c, sizeof(Cadastro), 1, fp);

    printf("\t\t == Relatorio do Cadastro == \n");
    printf("------------------------------------------------------------\n");
    printf("\nNome: %s \nEndereco: %s \nIdade: %d\n", c.nome, c.endereco, c.idade);

    system("pause");
    return 0;
}

Cadastro entraDados(){
    Cadastro cad;
        printf("------------------------------------------------------------\n");
        printf("Digite o nome: ");
        fgets(cad.nome, 29, stdin);
        cad.nome[strlen(cad.nome) - 1] = '\0';

        printf("Digite o Endereco: ");
        fgets(cad.endereco, 29, stdin);
        cad.endereco[strlen(cad.endereco) - 1] = '\0';

        printf("Digite a idade: ");
        scanf("%d", &cad.idade);
    return cad;
}


função para alocar a memoria no ponteiro
    p = CadastroTam(n);*/
