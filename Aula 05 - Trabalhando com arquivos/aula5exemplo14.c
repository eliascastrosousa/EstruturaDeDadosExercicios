#include <stdio.h>
#include <stdlib.h>

struct cadastro{
	char nome[30];
	char endereco[30];
	int idade;
};

int main(){

	FILE *f;
	f = fopen("struct.txt", "rb"); //leitura

	if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

	struct cadastro cliente;

	fread(&cliente,sizeof(struct cadastro),1,f);

	printf("%s, %s, %d", cliente.nome, cliente.endereco, cliente.idade);

fclose(f);


}


