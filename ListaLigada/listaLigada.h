typedef struct aluno{
    int matricula;
    float n1,n2,n3;
}ALUNO;

typedef struct elemento* Lista;

Lista *criaLista();

int tamLista(Lista *li);

void apagaLista(Lista *li);

int listaCheia(Lista *li);

int listaVazia(Lista *li);

int insere_final_lista(Lista *li, ALUNO al);

int insere_inicio_lista(Lista *li, ALUNO al);
