#include <stdio.h>
#include <stdlib.h>
//variavel global

void imprime(int n);
//declarei a fun��o imprimir e coloquei um param. inteiro n

int main(){
imprime(10);
//declarei que o parametro do int, o n, agora vale 10

}
void imprime(int n){ //agora declarando a fun��o

int i;
for (i=0;i<n;i++){
    printf("%d\n",i+1);
} //fun��o de contagem at� 10
}
