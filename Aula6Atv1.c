#include <stdio.h>
#include <stdlib.h>
#define tam 5
int main(void){

int *p;

p = (int*) malloc(tam * sizeof(int));

if (p == NULL){
	printf("Erro: Sem memoria!\n");
}

p[0] = 1;

for (int i = 0; i < tam; ++i){
        printf("P[%d] : %d \n\n",i+1,p[i]);
        p[i] = (p[i-1]+2);
	}

free(p);
return 0;

}
