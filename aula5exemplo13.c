#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *f;
	f = fopen("struct.txt", "rb"); //leitura

	if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

	char nome[30];
	char endereco[30];
	int idade;

	fread(nome,sizeof(char),30,f);
	fread(&endereco,sizeof(char),30,f);
	fread(&idade,sizeof(int),1,f);

	printf("\nConteudo do Arquivo: ");

	printf("Nome: %s,\nEndereco: %s \nIdade: %d",nome, endereco, idade );


}
