
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 100

int main(){

	FILE *f1, *f2;
	f1 = fopen("arq1.txt","w"); //modo de escrita para receber o input
	f2 = fopen("arq2.txt","w");

	char texto[tam];

    printf("Digite o texto: ");
    fgets(texto,tam-1,stdin);

    printf("Texto Recebido e salvo em ''arq1.txt''.\n");

	for (int i = 0; i < strlen(texto); ++i){
		fputc(texto[i],f1); //passando os dados para o ponteiro do arq1
	}

	fclose(f1); //fechando o modo escrita

    f1 = fopen("arq1.txt","r");//abrindo como modo leitura

    printf("Abrindo arquivo ''arq1.txt'': \n\n");

	if (f1 == NULL || f2 == NULL){ //verificando erro de nulo
		printf("Erro, Arquivo Nulo! Erro na Abertura!\n");
		system("pause");
		exit(1);
	}

	char c = fgetc(f1); //agora a variavel c esta recebendo os caracteres do ponteiro de arq1

	while(c != EOF){
		fputc(toupper(c), f2); // aqui migrando esses dados para o ponteiro f2
		c = fgetc(f1); // continuamente rebendo até chegar no fim do arquivo
	}

	fclose(f1); //fechado os modos de leitura
	fclose(f2); // e escrita

	f2 = fopen("arq2.txt", "r"); // iniciando modo de leitura de f2

	char b = fgetc(f2); // variavel b recebendo os dados do ponteiro

	while(b != EOF){
		printf("%c",b); //imprimindo em tela até chegar no fim do arq
		b = fgetc(f2);
	}

	printf("\n\n");
	fclose(f2); //fechado o modo de leitura
	system("pause");
	return 0;

}
