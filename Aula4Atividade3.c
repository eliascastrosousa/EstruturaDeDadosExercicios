#include <stdio.h>
#include <stdlib.h>
#define tam 10

int main(){

float vet[tam], *p_vet[tam];

for (int i = 0; i < tam; ++i){
	 vet[i] = (rand() % 100);
	 p_vet[i] = &vet[i];
	 printf("Posicao [%d] Valor: %0.2f Endereco: %p\n",i+1,vet[i],p_vet[i]);
	}

	return 0;
}
