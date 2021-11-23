typedef struct funcionario{
    int id;
    char nome[50];
    char endereco[50];
    int idade;
    char cargo[50];
    float salario;
}FUNCIONARIO;

typedef struct elemento* Lista;

Lista *criaLista();

void apagaLista(Lista *li);

int menuLista(menu);

FUNCIONARIO entraDados();

int insere_lista_ordenada(Lista *li, FUNCIONARIO dados_func);

int listaVazia(Lista *li);

int tamLista(Lista *li);

