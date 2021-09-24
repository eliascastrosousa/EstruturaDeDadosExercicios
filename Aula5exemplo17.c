#include <stdio.h>
#include <stdlib.h>

int main(){

	char nome[30];// = "Elias Castro";
	int idade;// = 25;
	float altura; //= 1.77;

	FILE *f;
	f = fopen("arquivo.txt", "w"); //gravação

	if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

	printf("Digite o nome: ");
	fgets(nome,29,stdin);

	printf("Digite a Idade: ");
	scanf("%d",&idade);

	printf("Digite a Altura: ");
	scanf("%f",&altura);

	printf("Nome %s, Idade %d, Altura %0.2f", nome, idade, altura);

	fprintf(f, "Nome %sIdade %d, Altura %0.2f.",nome,idade,altura );

	fclose(f);

}
