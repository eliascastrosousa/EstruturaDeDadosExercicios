#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int calculatotal(int num1 , int num2); //DEFINO O MODULO E Seus parametros

int main(){
setlocale(LC_ALL,"portuguese");

int x=5, y=6, resultado=0;
resultado = calculatotal(x,y); // AQUI ATRIBUO AO MODULO UM VALOR AS SUAS VARIAVEIS

printf("Resultado é %d!!\n",resultado);

}

int calculatotal(int num1, int num2){ // O PROGRAMA PULA PRA CÁ E FAZ O CALCULO DO MODULO
        return (num1+num2); // RETORNA A SOMA COMO RESULT PARA A VARIAVEL RESULTADO.
}

