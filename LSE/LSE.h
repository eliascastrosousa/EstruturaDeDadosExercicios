#define MAX 100

struct aluno{
    int matricula;
    float n1,n2,n3;
};

typedef struct lista Lista;

Lista *cria_lista(); //fun��o crialista que s� retorna endere�os de memoria, ou seja, ponteiros

void libera_lista(Lista *li);

