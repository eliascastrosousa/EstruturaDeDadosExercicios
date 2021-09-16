#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

#define tam 60

int main(){
setlocale(LC_ALL,"Portuguese");

	FILE *f;
	f = fopen("arquivo.txt","r"); //leitura
	if (f == NULL){
		printf("Erro, Arquivo Nulo! Erro na Abertura!\n");
		system("pause");
		exit(1);
	}

	char texto;

	for (int i = 0; i < 400; ++i){
		texto = fgetc(f);
		printf("%c",texto);
	}
	printf("\n\n");

	fclose(f);
	system("pause");
	return 0;
}
