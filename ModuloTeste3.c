#include <stdio.h>
#include <stdlib.h>
//variavel global

void imprime(int n);
//declarei a função imprimir e coloquei um param. inteiro n

int main(){
imprime(10);
//declarei que o parametro do int, o n, agora vale 10

}
void imprime(int n){ //agora declarando a função

int i;
for (i=0;i<n;i++){
    printf("%d\n",i+1);
} //função de contagem até 10
}
