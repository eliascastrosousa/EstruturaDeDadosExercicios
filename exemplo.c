#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vet = NULL, i, n;

    printf("Digite um valor: ");
    scanf("%d",&n);
    printf("\n\n");

    vet=(int*) malloc(n * sizeof(int));

    printf("1� n�mero impar inteiro �: %d\n", 1);
    for(vet[0]=1,i=1; i<=n ;i++){
        vet[i]=(vet[i-1]+2);
        printf("%d� n�mero �mpar inteiro �: %d\n",i+1, vet[i]);

    }
}
