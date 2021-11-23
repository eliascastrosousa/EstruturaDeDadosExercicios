
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void imprime(int n); //criei o modulo com um parametro "n"

int main(){
//setlocale(LC_ALL,"portuguese");

imprime(10); //chamei o modulo e dei a variavel "n" o valor 10
}

void imprime(int n){ // corpo do modulo
for(int c=0;c<n; c++){
    printf("%d\n",c+1);
    }
}
