#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void troca(int *x, int *y); //criação do metodo


int main(){

    int a, b;
    scanf("%d %d", &a,  &b);

    troca(&a, &b); //chamada do metodo dando valor aos procedimentos

    printf("a: %d, b: %d\n", a,b);

//return 0;
}

//escopo do metodo troca
void troca(int *x, int *y){
    int temp; // <- variavel local

    temp = *x ; // <- recebe o valor de x
    *x = *y ; // <- x recebe o valor de y
    *y = temp    ; // <- y recebe o valor de temp
}
