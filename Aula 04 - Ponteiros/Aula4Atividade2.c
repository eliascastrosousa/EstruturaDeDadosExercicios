#include <stdio.h>
#include <stdlib.h>
#define tam 2

int main(){
	int n[tam], *p_n[tam];

for (int i = 0; i < tam; ++i){
		printf("\nDigite um numero: ");
		scanf("%d", &n[i]);
		p_n[i] = &n[i];
	}
for (int i = 0; i < tam; ++i){
		printf("\nNumero [%d]: %d",i+1,n[i]);
        printf("\nEndereco do Numero [%d]: %p\n",i+1,p_n[i]);
	}
if(*p_n[0] != *p_n[1]){
    if(p_n[0]>p_n[1]){
        printf("\nO  Endereco %p e maior que o Endereco %p\n",p_n[0],p_n[1]);
    }else if (p_n[0]<p_n[1]){
        printf("\nO  Endereco %p e menor que o Endereco %p\n",p_n[0],p_n[1]);
    }
}else {
        printf("\nO  Endereco %p tem o mesmo valor que o Endereco %p\n",p_n[0],p_n[1]);
    }
}
