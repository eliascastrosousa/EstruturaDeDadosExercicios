/*5 � Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endere�o de uma pessoa. Agora, escreva uma fun��o que receba um inteiro �n� e
retorne o ponteiro para um bloco de mem�ria de tamanho �n�, alocado dinamicamente,
para ser utilizado como vetor desse tipo de estrutura. Solicite tamb�m que o usu�rio
digite os dados desse vetor dentro de uma outra fun��o.*/


typedef struct cad{
    char nome[30];
    int idade;
    char endereco[30];

}Cadastro;

