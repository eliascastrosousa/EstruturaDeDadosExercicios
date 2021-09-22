#include <stdio.h>
#include <stdlib.h>

int main(){

	char nome[30] = "Elias Castro";
	int idade = 25;
	float altura = 1.77;

	FILE *f;
	f = fopen("arquivo.txt", "w"); //gravação

	if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

	printf("Nome %s, Idade %d, Altura %0.2f", nome, idade, altura);

	fprintf(f, "\n\nNome %s, Idade %d, Altura %0.2f",nome,idade,altura );

	fclose(f);

}
