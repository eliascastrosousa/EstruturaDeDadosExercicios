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
#include "entrada.h"

int main(){
    int x, y, num;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    func_entrada(num);

switch(num){
    case 1:
        func_soma( x,  y);
        func_entrada(num);
    case 0:
        break;
}

}
