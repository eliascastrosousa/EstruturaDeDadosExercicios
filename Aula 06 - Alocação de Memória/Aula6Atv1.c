#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(){

int *p = NULL, v=5, i;

p = (int*) malloc(v * sizeof(int));

if (p == NULL){
	printf("Erro: Sem memoria!\n");
}

printf("P[%d] : %d \n\n",0,1);

for (p[0] = 1, i = 1; i <= v; ++i){
        p[i] = (p[i-1]+2);
        printf("P[%d] : %d \n\n",i+1,p[i]);
	}
}
/*
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int *vet = NULL, i, n;

    printf("Digite um valor: ");
    scanf("%d",&n);
    printf("\n\n");

    vet=(int*) malloc(n * sizeof(int));

    printf("1? n?mero impar inteiro ?: %d\n", 1);
    for(vet[0]=1,i=1; i<=n ;i++){
        vet[i]=(vet[i-1]+2);
        printf("%d? n?mero ?par inteiro ?: %d\n",i+1, vet[i]);

    }
}*/
