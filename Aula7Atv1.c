#include <stdio.h>

int cont(int n);

int main(){
    int n,i;

	printf("Digite um numero: ");
	scanf("%d",&n);

	printf("\nVersao Iterativa\n");
    i = n;

	while(i >= 0){
		printf("%d \n",i);
		i--;
	}

		printf("\nVersao Recursiva\n");
		printf("%d\n",cont(n));

}

int cont(int n){
    if (n==0){
		return 0;
	}printf("%d\n",n);
	return cont(n-1);
}
