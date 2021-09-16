#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 60

int main(){

	FILE *f;
	f = fopen("arquivo.txt","w");
	if (f == NULL){
		printf("Erro, Arquivo Nulo! Erro na Abertura!\n");
		system("pause");
		exit(1);
	}
	char texto[tam] = "Trabalhar com Dados, tudo de bom ";

	for (int i = 0; i < strlen(texto); ++i){ //quero que conte quando caracteres tem e então faça o loop
		fputc(texto[i],f);
	}
	fclose(f);
	system("pause");
	return 0;
}
