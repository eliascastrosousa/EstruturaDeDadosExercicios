#include <stdio.h>
#include <stdlib.h>
//variavel global

void calculaTotal(int num1,int num2);
int resultado;

int main(){
    int x=5,y=2,z=0;
    calculaTotal(x,z);
    printf("O Total e: %d",resultado);
    return 0;
}
void calculaTotal(int num1,int num2){
    resultado =  (num1+num2);
}

