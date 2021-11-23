#define MAX 100

struct aluno{
    int matricula;
    float n1,n2,n3;
};

typedef struct lista Lista;

Lista *cria_lista(); //função crialista que só retorna endereços de memoria, ou seja, ponteiros

void libera_lista(Lista *li);

