#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *p;

int main(){

p = (int*) malloc(5* sizeof(int));

if (p == NULL){
	printf("Erro: Sem memoria!\n");
}

for (int i = 0; i < 5; ++i){
	printf("Digite o P[%d]: ",i+1);
	scanf("%d",&p[i]);
}

}
