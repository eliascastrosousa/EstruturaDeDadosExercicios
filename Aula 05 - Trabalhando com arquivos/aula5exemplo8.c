#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	char strin[30];
	FILE *f; //ponteiro
	f = fopen("arq1.txt", "r"); //quero que o f seja um ponteiro para o arq1
	if (f== NULL){ //se o arquivo estiver nulo
		printf("Erro na abertura!!\n");
		exit(1);
	}

	char  *resultado = fgets(strin,20,f);

	if (resultado == NULL){
		printf("Erro na leitura, texto nulo. \n");
	} else {
		printf("%s\n", strin);
	}

	printf("\n\n");
	fclose(f);

	
	return 0;

}
