#include <stdio.h>
#include <stdlib.h>

struct cadastro{
	char nome[30];
	char endereco[30];
	int idade;
};

int main(){

	FILE *f;
	f = fopen("struct.txt", "wb");
	if (f == NULL){
		printf("Erro na Abertura!\n");
		system("pause");
		exit(1);
	}
	struct cadastro cliente = {"josé da silva", "Rua das Pedras 71", 25};

	int total_gravado = fwrite(&cliente, sizeof(struct cadastro),1,f);

	if (total_gravado == 0){
	printf("Erro na escrita do arquivo! \n");
	system("pause");
	exit(1);
	}else{
	printf("Gravado com Sucesso!\n");
	}

}
