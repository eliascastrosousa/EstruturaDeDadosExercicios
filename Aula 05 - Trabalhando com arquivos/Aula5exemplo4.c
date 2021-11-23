#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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

	char texto = fgetc(f);

	while(texto != EOF){
		printf("%c", toupper(texto));
		texto = fgetc(f);
	}

	printf("\n\n");

	fclose(f);
	system("pause");
	return 0;
}
