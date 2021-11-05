/*6 � Utilizando o programa do exerc�cio anterior, crie uma rotina para salvar o conte�do
do vetor em um arquivo de forma bin�ria, que � mais f�cil de utilizar quando
trabalhamos com vetores de estruturas. Este seu novo programa deve ser capaz de
salvar todo o conte�do gerado em uma se��o de utiliza��o, para que o mesmo conte�do
seja recuperado na pr�xima se��o de utiliza��o, ou seja, seu novo programa deve ser
capaz de recuperar todos os dados gravados em se��o anterior para continuar o
processamento.*/

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


/*//fun��o para alocar a memoria no ponteiro
    p = CadastroTam(n);*/
