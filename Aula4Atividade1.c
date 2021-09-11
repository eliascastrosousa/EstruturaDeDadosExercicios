#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 3

void Acrescenta(int *num[]);

int main(){
	int n[tam], *p_n[tam];

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

    for (int i = 0; i < tam; ++i){
        Acrescenta(&(*p_n[i]));
	}

    printf("\n");

	for (int i = 0; i < tam; ++i){
		printf("Variavel N[%d] com valor acrescido de 100 e igual a: %d\n",i+1, n[i]);
    }
}

void Acrescenta(int *num[]){
    for (int i = 0; i < tam; ++i){
           int a = num[i];
            num[i]= 100+a;
	}

}
