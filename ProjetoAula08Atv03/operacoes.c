#include <stdio.h>
#include <stdlib.h>

/*Funcao Soma*/
float func_soma(float x, float y){
    float soma;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite o outro numero: ");
    scanf("%f", &y);
    soma = x+y;
    printf("Resultado: %0.2f\n\n",soma);
}

/*Funcao substracao*/
float func_sub(float x, float y){
    float sub;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite o outro numero: ");
    scanf("%f", &y);
    sub = x-y;
    printf("Resultado: %0.2f\n\n",sub);
}

/*Funcao Soma*/
float func_mult(float x, float y){
    float mult;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite o outro numero: ");
    scanf("%f", &y);
    mult = x*y;
    return printf("Resultado: %0.2f\n\n",mult);
}

/*Funcao Soma*/
float func_div(float x, float y){
    float div;
    printf("Digite um numero: ");
    scanf("%f", &x);
    printf("Digite o outro numero: ");
    scanf("%f", &y);
    div = x/y;
    return printf("Resultado: %0.2f\n\n",div);
}
