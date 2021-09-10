#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 3

//int
main(){
	//int n1, n2, n3;
	int n[tam];
	//int *p_n1, *p_n2, *p_n3;
	int *p_n[tam];
	//p_n1 = &n1, p_n2 = &n2, p_n3 = &n3;
	//printf("Digite o Valor da Variavel 1: ");
	//scanf("%d", &(*p_n1));

	for (int i = 0; i < tam; ++i){
		p_n[i] = &n[i];
	}

	for (int i = 0; i < tam; ++i){
		printf("Digite o Valor da Variavel [%d]: ",i+1);
		scanf("%d", &(*p_n[i]));
	}
	printf("\n");

	for (int i = 0; i < tam; ++i){
		printf("Variavel N[%d] Recebida igual a: %d\n",i+1, n[i]);
	}

//return 0;

	//printf("Variavel Recebida igual a: %d",n1);

}
