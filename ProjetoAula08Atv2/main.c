#include <stdio.h>
#include <stdlib.h>
#include "ponto.h"
int main(i){
    float d;
    Ponto *p, *q;
    p = pto_cria(10,21);
    q = pto_cria(7,25);
    d = pto_distancia(p,q);

    printf("Distancias entre os pontos: %0.2f\n",d);
    pto_libera(p);
    pto_libera(q);

    system("pause");
    return 0;
}
