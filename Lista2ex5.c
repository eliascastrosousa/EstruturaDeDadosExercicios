/*5 – Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro “n” e
retorne o ponteiro para um bloco de memória de tamanho “n”, alocado dinamicamente,
para ser utilizado como vetor desse tipo de estrutura. Solicite também que o usuário
digite os dados desse vetor dentro de uma outra função.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct cadastro{
    char nome[30];
    int idade;
    char endereco[30];
}Cadastro;

Cadastro entraDados();
CadastroTam(int n);

void main(){
    int n, *p=NULL;

    printf("Digite um inteiro n: " );
    scanf("%d", &n);

    //função para alocar a memoria no ponteiro
    p = CadastroTam(n);

    printf("\n\t\t  == Ficha Cadastral  ==\n");

    Cadastro cad;

    cad = entraDados();

    printf("------------------------------------------------------------\n");

    printf("\n\nRegistro finalizado....\n\n\n");

    printf("\t\t == Relatorio do Cadastro == \n");

    printf("\nNome: %s", cad.nome);
    printf("\nIdade: %d", cad.idade);
    printf("\nEndereco: %s\n\n", cad.endereco);
    system("pause");

}

CadastroTam(int n){
    int *cadTam;
    cadTam = (int*) malloc(n*sizeof(Cadastro));
    return cadTam;
}

Cadastro entraDados(){
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
