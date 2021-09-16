
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	FILE *f1, *f2;
	f1 = fopen("minusculo.txt","r");
	f2 = fopen("maiuscula.txt","w");

	if (f1 == NULL || f2 == NULL){
		printf("Erro, Arquivo Nulo! Erro na Abertura!\n");
		system("pause");
		exit(1);
	}

	char c = fgetc(f1);

	while(c != EOF){
		fputc(toupper(c), f2);
		c = fgetc(f1);
	}

	fclose(f1);
	fclose(f2);

	f2 = fopen("maiuscula.txt", "r");

	char b = fgetc(f2);

	while(b != EOF){
		printf("%c",b);
		b = fgetc(f2);
	}

	printf("\n\n");
	fclose(f2);

	return 0;

}
