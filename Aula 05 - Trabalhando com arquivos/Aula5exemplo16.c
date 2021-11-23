#include <stdio.h>
#include <stdlib.h>

int main(){

	FILE *f;
	f = fopen("arquivo.txt", "w"); //gravação

	if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

	char texto[30], nome[30];
	int idade;
	float altura;

	fscanf(f, "%s %s", texto, nome );
	printf("%s %s\n",texto, nome );

	fscanf(f, "%s %d", texto, &idade );
	printf("%s %d\n",texto, idade );

	fscanf(f, "%s %f", texto, &altura );
	printf("%s %f\n",texto, altura );


	fclose(f);
	printf("\n\n");
	return 0;

}


