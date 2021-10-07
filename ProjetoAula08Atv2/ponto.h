//arquivo ponto.h
//Atribui novo nome para a Struct ponto:
typedef struct ponto Ponto;

//crio uma novo ponto, somente ponteiro
Ponto *pto_cria(float x, float y);

//libera um ponto
void pto_libera(Ponto *p);

//acessa os valores x e y  de um ponto
void  pto_acessa(Ponto *p, float *x, float *y);

//atribui os valores x e y a um ponto
void  pto_atribui(Ponto *p, float x, float y);

//calcula a distancia entre os dois pontos
float  pto_distancia(Ponto *p1, Ponto *p2);
