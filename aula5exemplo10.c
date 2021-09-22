#include <stdio.h>
#include <stdlib.h>

int main(){

FILE *f;
f = fopen("vetor.txt", "wb"); //
if (f == NULL){
	printf("Erro na abertura!\n");
	system("pause");
	exit(1);
	}

char str[20] = "Instituro Federal";
float x = 32.087;
int v[10] = {0,1,2,3,4,5,6,7,8,9}; // grava todo o vetor

fwrite(str, sizeof(char),20,f);
fwrite(&x, sizeof(float),1,f);
fwrite(v, sizeof(int), 10,f);

printf("\n\n");
fclose(f);

}
