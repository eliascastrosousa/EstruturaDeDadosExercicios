
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

	FILE *f, *f1, *f2;
	f1 = fopen("arq1.txt","w");
	f2 = fopen("arq2.txt","w");

	char texto[60];

    printf("Digite o texto: ");
    fgets(texto,59,stdin);

    printf("Texto Recebido e salvo em ''arq1.txt''.\n");

	for (int i = 0; i < strlen(texto); ++i){
		fputc(texto[i],f1);
	}
	fclose(f1);

    f1 = fopen("arq1.txt","r");
    printf("Abrindo arquivo: ''arq1.txt''.\n\n");

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

	f2 = fopen("arq2.txt", "r");

	char b = fgetc(f2);

	while(b != EOF){
		printf("%c",b);
		b = fgetc(f2);
	}

	printf("\n\n");
	fclose(f2);

	return 0;

}
