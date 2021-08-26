#include <stdio.h>
#include <stdlib.h>
//variavel global

void imprime(int n);

int main(){
imprime(10);

}
void imprime(int n){

int i;
for (i=0;i<n;i++){
    printf("%d\n",i+1);
}
}
