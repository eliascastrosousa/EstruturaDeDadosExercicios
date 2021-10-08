/*Crie um TAD que efetue operações matemáticas tais como soma, subtração,
multiplicação e divisão de valores, armazenando o resultado obtido. O TAD deve ter os
dados encapsulados, e enquanto o programa funcionar ele deverá armazenar o
resultado da operação anterior, somente o resultado da última operação, ou seja,
apenas 1 campo.

 No programa principal, acrescente um menu onde o usuário insira novos dados para
cálculo e escolha a operação a ser executada. O menu deverá funcionar continuamente
e ter uma opção de acesso ao dado referente ao resultado da última operação realizada
anteriormente. O menu deverá possuir também uma opção de encerramento do
programa. */

#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

int main(){
    float x, y,result;
    int num;

     do{
         printf("Soma: [1] \nSubtracao: [2] \nMultiplicacao: [3] \nDivisao: [4] \nResultado da ultima operacao: [5] \nou Sair: [0] \nDigite:  ");
         scanf("%d",&num);

        switch(num){
            case 1:
                printf("\nSelecionado: Soma!\n\n");
                result = func_soma( x,  y);
                break;
            case 2:
                printf("\nSelecionado: Subtracao!\n\n");
                result = func_sub( x,  y);
                break;
            case  3:
                printf("\nSelecionado: Multiplicacao!\n\n");
                 result = func_mult( x,  y);
                break;
            case 4:
                printf("\nSelecionado: Divisao!\n\n");
                 result = func_div( x,  y);
                break;
            case 5:
                printf("\nUltimo Resultado: %0.2f\n\n",result);
                break;
            default:
                printf("Informacao invalida, tente novamente. \n\n");
                break;
        }
    }while(num != 0);
}
