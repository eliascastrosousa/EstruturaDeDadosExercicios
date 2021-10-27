/*5 – Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade
e o endereço de uma pessoa. Agora, escreva uma função que receba um inteiro “n” e
retorne o ponteiro para um bloco de memória de tamanho “n”, alocado dinamicamente,
para ser utilizado como vetor desse tipo de estrutura. Solicite também que o usuário
digite os dados desse vetor dentro de uma outra função.*/


typedef struct cad{
    char nome[30];
    int idade;
    char endereco[30];

}Cadastro;

