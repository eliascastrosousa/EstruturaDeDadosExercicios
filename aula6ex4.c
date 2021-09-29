#include <stdio.h>
#include <stdlib.h>

int main(){

	int *p; //ponteiro 

	p = (int*) malloc(10 * sizeof(int)); //alocando 10 espaços ints (40 bytes) apontando em p

	for (int i = 0; i < 10; ++i){
		p[i] = i+10; // preenchendo os 10 espacos 
	}

	for (int i = 0; i < 20; ++i){
		printf("Posicao P[%d]: %d\n",i, p[i] ); //printando
	}

	// realocando para 20 posições

	p = (int*) realloc(p, 20*sizeof(int)); // aqui estou realocando de 10 para 20

	for (int i = 10; i < 20; ++i){
		p[i] = i+100;
	}

	printf("\nAgora com novo espaco alocado\n\n");

	for (int i = 10; i < 20; ++i){
		printf("Posicao P[%d]: %d\n",i, p[i] );
	}

	return 0;
	}
