#include <stdio.h>
#include <stdlib.h>
#include "minhalib.h"

int main(){
    int n=0;

	printf("Digite um numero: ");
	scanf("%d",&n);

	printf("\nVersao Iterativa\n");
    printf("%d\n",func_inte(n));


    printf("\nVersao Recursiva\n");
    printf("%d\n",func_rec(n));

}

