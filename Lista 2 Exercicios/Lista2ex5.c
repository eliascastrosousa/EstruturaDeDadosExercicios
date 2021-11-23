/*5 – Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro “n” e
retorne o ponteiro para um bloco de memória de tamanho “n”, alocado dinamicamente,
para ser utilizado como vetor desse tipo de estrutura. Solicite também que o usuário
digite os dados desse vetor dentro de uma outra função.*/

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
    printf("\t\t == Relatorio do Cadastro == \n");

    for(int c = 0; c<n; c++){
        printf("\nNome do candidato [%d]: %s", c+1, p[c].nome);
        printf("\nIdade do candidato [%d]: %d",c+1, p[c].idade);
        printf("\nEndereco do candidato [%d]: %s\n\n",c+1, p[c].endereco);
    }

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
