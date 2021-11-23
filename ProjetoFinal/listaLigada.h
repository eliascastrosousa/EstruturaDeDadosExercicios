typedef struct func{
    int id;
    char nome[50];
    char endereco[50];
    int idade;
    float salario;
    char cargo[30];
}FUNCIONARIO;

typedef struct elemento* Lista;

Lista *criaLista();

void apagaLista(Lista *li);
