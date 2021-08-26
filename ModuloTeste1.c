#include <stdio.h>
#include <stdlib.h>

int calculaTotal(int num1,int num2);

int main(){
    int x=5,y=2,resultado=0, a,b,result;
    resultado=calculaTotal(x,y);
    printf("O Total e: %d",resultado);
    return 0;
}
int calculaTotal(int num1,int num2){
    return(num1+num2);
}
