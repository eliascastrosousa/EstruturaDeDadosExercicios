/*Crie uma função recursiva que receba um número inteiro “n” e imprima todos os
números naturais entre 0 e “n”, em ordem crescente.*/

#include <stdio.h>
#include <stdlib.h>

int func(int n);

int main(){
    int n, c=0;

printf("Digite um numero: ");
scanf("%d",&n);

printf("%d\n",func( n));

}

int func(int n){
   for(int c=0; c<n; c++){
    printf("%d\n",c);
   }
}
