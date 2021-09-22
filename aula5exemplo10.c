#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *f;
f = fopen("dados.txt", "wb"); //
if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

char str[20] = "Instituro Federal";
float x = 32.087;
int vetor[10] = {0,1,2,3,4,5,6,7,8,9}; // grava todo o vetor

fwrite(str, sizeof(char),20,f);
fwrite(&x, sizeof(float),1,f);
fwrite(vetor, sizeof(int), 10,f);

printf("\n\n");
fclose(f);

}
