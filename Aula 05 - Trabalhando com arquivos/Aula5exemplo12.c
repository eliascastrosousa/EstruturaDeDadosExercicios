#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *f;
	int i;
	f = fopen("vetor.txt", "rb"); //

	if (f = NULL){
		printf("Erro na Leitura!\n");
		system("pause");
		exit(1);
	}

	int total_lido, v[10]; // = {0,1,2,3,4,5,6,7,8,9};

	total_lido = fread(v,sizeof(int),10,f);
	
	if (total_lido != 10){
		printf("Erro na Leitura dos Dados!\n");
		system("pause");
		exit(1);
	}else{
		printf("Arquivo Lido com Sucesso!");
	}

	printf("\n\n");
	fclose(f);

	printf("Conteudo do Arquivo: ");

	for (int i = 0; i < 10; ++i)
	{
		printf("%d ",v[i]);
	}

}
