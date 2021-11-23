#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	FILE *f; //ponteiro
	f = fopen("arq1.txt", "r"); //quero que o f seja um ponteiro para o arq1
	if (f== NULL){ //se o arquivo estiver nulo
		printf("Erro na abertura!!\n");
		exit(1);
	}
	//char c = fgetc(f); //c recebe os caracteres do ponteiro f que aponta para um arquivo de texto
	while(!feof(f)){ //enquanto nao estiver no fim do arquivo
		char c = fgetc(f);
        printf("%c", c); //imprime caractere
	}
	printf("\n\n");
	fclose(f);


}
