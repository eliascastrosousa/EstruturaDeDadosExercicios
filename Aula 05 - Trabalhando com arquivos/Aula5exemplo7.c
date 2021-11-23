#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	FILE *f; //ponteiro
	f = fopen("arq1.txt", "w"); //quero que o f seja um ponteiro para o arq1
	if (f== NULL){ //se o arquivo estiver nulo
		printf("Erro na abertura!!\n");
		exit(1);
	}

	char texto[60] = "Trabalhando com daods, tudo de bom";
	int i;

	int retorno = fputs(texto, f);
	if (retorno == EOF){
	 	printf("Erro na gravação! \n");
	}

	printf("\n\n");
	fclose(f);
	return 0;

}

